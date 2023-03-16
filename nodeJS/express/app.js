const express =require("express")
const path = require("path");
const app = express();
const port=80;

app.use('/static', express.static('static'))

app.set('view engine','pug')

app.set('views', path.join(__dirname,'views'))

app.get("/demo", (req,res)=>{
    res.status(200).render('demo', { title: 'Hey', message: 'how to use pug!' })
});


app.get("/", (req,res)=>{
    res.status(200).send("this is my first express app")
});

app.get("/about", (req,res)=>{
    res.send("this is my first express app")
});

app.listen(port,()=>{
    console.log(`the application started successfully on port ${port}`)
})