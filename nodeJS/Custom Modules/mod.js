console.log("this is modual");

function average(arr){
    let sum = 0;
    arr.forEach(element => {
        sum += element;
    });
    return sum/arr.length;
}


module.exports = {
    avg: average,
    name: "montea",
    repo: "GitHub"
}


module.exports.name = "monty";