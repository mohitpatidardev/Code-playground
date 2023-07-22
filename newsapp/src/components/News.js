import React, { useEffect , useState } from 'react'
import '../App.css';
import NewsItem from './NewsItem'
import Spinner from './Spinner';
import PropTypes, { string } from 'prop-types'
import InfiniteScroll from "react-infinite-scroll-component";



const News =(props)=> {

  const [articles, setArticles] = useState([])
  const [loading, setLoading] = useState(true)
  const [page, setPage] = useState(1)
  const [totalResults, setTotalResults] = useState(0)

  

  const capitalizeFirstLetter = (string) =>{
    return string.charAt(0).toUpperCase() + string.slice(1);
}

  const updateNews = async()=>{
    props.setProgress(10);
    let url = `https://newsapi.org/v2/top-headlines?country=${props.country}&category=${props.category}&apiKey=${props.apikey}&page=${page}&pageSize=${props.pageSize}`;
    setLoading(true)
    let data = await fetch(url);
    props.setProgress(50);
    let parsedData = await data.json()
    setArticles(parsedData.articles)
    setTotalResults(parsedData.totalResults)
    setLoading(false)

    props.setProgress(100);
  }


  useEffect(() => {
    document.title = `${capitalizeFirstLetter(props.category)} - Get daily news free!`;
    updateNews();
  }, [])


  const fetchMoreData = async() => {
    setPage(page+1)
    let url = `https://newsapi.org/v2/top-headlines?country=${props.country}&category=${props.category}&apiKey=${props.apikey}&page=${page + 1}&pageSize=${props.pageSize}`;
    let data = await fetch(url);
    let parsedData = await data.json()
    setArticles(articles.concat(parsedData.articles))
    setTotalResults(parsedData.totalResults)
  };


    return (
      <>
        <h1 className="text-center my-4 custom-margin">NewsWeb - Top {capitalizeFirstLetter(props.category)} HeadLines </h1>
        {loading && <Spinner />}
        <InfiniteScroll
          dataLength={articles.length}
          next={fetchMoreData}
          hasMore={articles.length !== totalResults}
          loader={<Spinner/>}
        >
          <div className="container">
        <div className="row">
          {articles.map((element) => {
            return <div className="col-md-4 my-3" key={element.url}>
              <NewsItem title={element.title} description={element.description ? element.description.slice(0, 80) : ""} imgUrl={element.urlToImage} newsUrl={element.url} publishedAt={element.publishedAt} author={!element.author?"unknown":element.author} source={element.source.name}/>
            </div>

          })}

        </div>
        </div>
        </InfiniteScroll>


      </>
    )
}


News.defaultProps = {
  country: 'in',
  pageSize: 9
}

News.PropTypes = {
  country: PropTypes.string,
}


export default News
