import React, { Component } from 'react'

const NewsItem =(props)=> {



    let { title, description, imgUrl, newsUrl, publishedAt, author, source } = props;

    return (
      <div className='my-3'>
        <div className="card" >
          <div style={{
            display: 'flex',
            justifyContent: 'flex-end',
            position: 'absolute',
            right: '0',
            top:'-9px'
          }}>
            <span class="badge rounded-pill bg-danger ">
              {source}</span>
          </div>

          <img src={!imgUrl ? "https://upload.wikimedia.org/wikipedia/commons/d/d1/Image_not_available.png" : imgUrl} className="card-img-top" alt="..." />
          <div className="card-body">
            <h5 className="card-title">{title}...</h5>
            <p className="card-text">{description}...</p>
            <p className="card-text"><small className="text-muted">by {author} on {new Date(publishedAt).toGMTString()}</small></p>
            <a href={newsUrl} target="_blank" className="btn btn-sm btn-dark">Read more</a>
          </div>
        </div>
      </div>
    )

}

export default NewsItem
