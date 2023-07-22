console.log("hello world");

function greet(name , greettext){
    console.log(greettext + " " +name);
    console.log(name + " is a good boy");
}
function sum(a,b,c){
    let d = a+b+c;
    return d;
}
let name1 = "montea";
let name2 = "wewake";
let name3 = "cvm";
let greettext = "good mornig";

greet(name1 , greettext);
greet(name2 , greettext);
greet(name3 , greettext);

let returnval = sum(1,2,3)
console.log(returnval); 
