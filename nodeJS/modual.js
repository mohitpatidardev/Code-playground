const fs = require("fs");
let text = fs.readFileSync("mon.txt", "utf-8");
text = text.replace("hello", "hey");

console.log("The content of the file is")
console.log(text);

console.log("Creating a new file...")
fs.writeFileSync("rohan.txt", text);