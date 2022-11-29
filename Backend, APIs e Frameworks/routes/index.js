const path = require('path');
const express = require('express');
const app = express();

const routerClient = require('./routes/clients');
const routerCar = require('./routes/cars');
const PORT = 3000;

app.use(express.json());
app.use(express.urlencoded({ extended: true}));

app.use('/', express.static(path.join(__dirname, '/public')));

app.use('/cliente', routerClient);

app.use('/carros', routerCar);

app.listen(PORT, ()=>{
    console.log(`Servidor rodando na porta ${PORT}`);
});


