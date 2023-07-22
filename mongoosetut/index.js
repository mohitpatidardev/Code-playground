const mongoose = require("mongoose");
mongoose.connect("mongodb://127.0.0.1:27017/monty");

var db = mongoose.connection;
db.on("error", console.error.bind(console, "connection error:"));

// db.once("open", function () {
//   console.log(" we are coected.....");
// });

const kittySchema = new mongoose.Schema({
  name: String,
});

var Kitten = mongoose.model("kitten", kittySchema);

var moonKitty = new Kitten({ name: "moonKitty" });
console.log(moonKitty.name);

// kittySchema.methods.speak = function () {
//   var greeting = "my name is " + this.name;
//   console.log(greeting);
// };

// moonkitty.save(function (err, moonkitty) {
//   if (err) return console.error(err);
//   moonkitty.speak();
// });


// Kitten.find({ name: "moonkitty" },function (err, moonkitty) {
//   if (err) return console.error(err);
//   moonkitty.speak();
// });
