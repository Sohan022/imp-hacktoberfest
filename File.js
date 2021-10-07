const mongoose = require("mongoose");
var passportLocalMongoose=require("passport-local-mongoose");

let UserSchema = new mongoose.Schema({
	username: {type: String},	
	email: {type: String},
	phonenumber: {type: Number},
	password: {type: String},
	firstname: {type: String},
	lastname: {type: String},
});
UserSchema.plugin(passportLocalMongoose);


module.exports = mongoose.model("User", UserSchema);