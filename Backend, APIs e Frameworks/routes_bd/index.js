//Importar Bibliotecas
const express = require('express');
const app = express();
require('dotenv').config();

//Importar Rotas
const userRouter = require('./Routes/UsersRouter');
const loginRouter = require('./Routes/loginRouter');

//Configurações das Requisições
app.use(express.json());
app.use(express.urlencoded({ extended: true}));

//Rotas
app.use('/', loginRouter);
app.use('/users', userRouter);

//Listen
const PORT = 3500;
app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})