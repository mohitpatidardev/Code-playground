const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 8000;
const home = fs.readFileSync('index.html')
const about = fs.readFileSync('about.html')
const services = fs.readFileSync('services.html')
const contacts = fs.readFileSync('contacts.html')

const server = http.createServer((req,res)=>{
    console.log(req.url)
    res.statusCode = 200;
    res.setHeader('content-type', 'text/html');
    res.end(home);
});

server.listen(port,hostname,()=>{
    console.log(`server runing at http://${hostname}:${port}/`);
});