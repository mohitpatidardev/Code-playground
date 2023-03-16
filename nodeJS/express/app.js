const express = require("express");
const path = require("path");
const app = express();
const port = 80;

// for serving static file
app.use('/static' , express.static('static'))

// set templat engine as pug
app.set('viwe engine','pug')

// set the viwes directory
app.set('viwe',path.join(__dirname,'viwes'))

// pug demo endpoint 

app.get("/" , (req , res)=>{
    res.status(500).res.render('demo', { title: 'Hey wewake', message: 'Hello there!' })
});

app.get("/" , (req , res)=>{
    res.send("this is home page of my first express");
});

app.get("/about" , (req , res)=>{
    res.status(500).send("this is about page of my first express");
});

app.post("/about" , (req , res)=>{
    res.send("this is a post request about page of my first express");
});

app.listen(port , ()=>{
    console.log(`the application start succesfully ${port}`);
});