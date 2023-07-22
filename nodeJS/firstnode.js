// console.log("hey")

const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html>
      <head>
          <title>
              Box model 
          </title>
          <style>
              *{
                  box-sizing: border-box;
              }
  
              body{
                  background-color: antiquewhite;
              }
  
              .cantainer{
                  background-color: rgb(108, 213, 213);
                  border: 4px solid rgb(117, 2, 113);
                  /* we can set padding / margin for top, right, left , bottom like this */
                  /* padding-top: 70px;
                  padding-bottom: 70px;
                  padding-left: 30px;*/
  
                  /* padding: top right bottom left ; same as for margin */
                  /* padding: 70px 30px 70px 30px;  */
  
                  /* padding: y(top bottom) x(left right); same as for margin */
                  padding: 20px 15px; 
                  
                  margin: 23px 15px;
  
                  border-radius: 23px;
                  width: 800px;
              }
          </style>
      </head>
      <body>
          <div class="cantainer">
              <h1>box model in css</h1>
              <p id="first">Lorem ipsum dolor sit amet consectetur adipisicing elit. Temporibus sequi obcaecati impedit rem, autem ratione deleniti aut quod animi natus sit esse deserunt tenetur est doloribus at nobis minima ad.</p>
          </div>
  
          <div class="cantainer">
              <h1>box model in css</h1> BCXz cjk'/, mnbc
              <p id="second">Lorem ipsum dolor sit amet consectetur adipisicing elit. Temporibus sequi obcaecati impedit rem, autem ratione deleniti aut quod animi natus sit esse deserunt tenetur est doloribus at nobis minima ad.</p>
          </div>
  
          <div class="cantainer">
              <h1>box model in css</h1>
              <p id="third">Lorem ipsum dolor sit amet consectetur adipisicing elit. Temporibus sequi obcaecati impedit rem, autem ratione deleniti aut quod animi natus sit esse deserunt tenetur est doloribus at nobis minima ad.</p>
          </div>
      </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});