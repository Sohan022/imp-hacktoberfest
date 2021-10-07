var express = require("express");
var app = express();

app.use(express.static("public"));
app.set("view engine", "ejs");

app.get("/", (req, res) => {
    res.render("home");
});

app.get("/type/:name", (req, res) => {
    var name = req.params.name;
    res.render("type", { name: name });
});

app.get("/posts", (req, res) => {
    var posts = [
        { title: "post 1", author: "Yoda" },
        { title: "post 2", author: "Obi-Wan" },
        { title: "post 3", author: "Han Solo" }
    ];

    res.render("posts", { posts: posts });
});

app.listen(3000, () => console.log("Server started"));
