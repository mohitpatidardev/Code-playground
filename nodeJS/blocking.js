// synchronous or blocking 
// -line by line execution


// asynchronous or non-bloacking 
// -line by line execution not guaranteed
// -callbacks will fire

const fs = require("fs");
let text = fs.readFile("mon.txt", "utf-8" ,(err,data)=>{
    console.log(err,data);
});
console.log("this is a message");