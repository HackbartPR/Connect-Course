const express = require('express');
const app = express();

const PORT = 3000;

app.use('/', (req,res)=>{
    const url = createURL(req);
    res.write(url);
    res.end();
})

function createURL(req){
    const host = req.headers.host; 
    const path = req.url;
    return host + path;
}

app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})