const express = require("express");

const app = express();
const port = 80;

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