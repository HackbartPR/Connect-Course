var caixa = {
    vendas: [],
    valor: 0
};

let quantidade = 0;
do{
    let produto = parseInt(mostrarMenu());
    let quantidade = mostrarProdutos(produto);
    let {simples, duplo, nome} = informacoes(produto);
    
    comprar(quantidade, simples, duplo, nome);

    //comprar(quantidade);
}while(confirm("Deseja Continuar?"));

mostrarValores(caixa);

function mostrarValores(obj){
    let string = "";
    obj.vendas.forEach((venda,index)=>{
        string += `Venda ${index+1}:
                Produto: ${venda.nome}
                Quantidade: ${venda.quantidade}
                Valor: R$${venda.valor}\n\n`;
    })

    alert(`Valor em Caixa: ${obj.valor}\n\n${string}`);
}

function comprar(quantidade, simples, duplo, nome){
    let comDesconto = 0;
    let semDesconto = 0;

    if(quantidade % 2 == 0){
        comDesconto = quantidade / 2;
    }else{
        comDesconto = (quantidade - 1) / 2;
        semDesconto = 1;
    }

    let valor = (comDesconto * duplo) + (semDesconto * simples);

    let venda = {
        nome: nome,
        quantidade: quantidade,
        valor: valor
    }

    caixa.vendas.push(venda);
    caixa.valor += valor;
}

function mostrarProdutos(produto){
    let string = "";
    switch(produto){
        case 1: 
            string = `Cachorro Quente:
                1x Quantidade = R$8,00
                2x Quantidade = R$15,00\n\n`;
            break;
        case 2:
            string = `Hamburguer:
                1x Quantidade = R$10,00
                2x Quantidade = R$19,00\n\n`;
            break;
        case 3: 
            string = `Misto Quente:
            1x Quantidade = R$6,00
            2x Quantidade = R$11,00\n\n`;
            break;
    }

    string += `Quantidade que deseja comprar?`;
    return prompt(string);
}

function mostrarMenu(){
    return prompt(`Produtos:
        1 - Cachorro Quente
        2 - Hamburguer
        3 - Misto Quente\n
    Qual produto deseja comprar?`);
}

function informacoes(produto){
    let simples = 0;
    let duplo = 0;
    let nome = "";

    switch(produto){
        case 1:
            simples = 8;
            duplo = 15;
            nome = "Cachorro Quente";
            break;
        case 2:
            simples = 10;
            duplo = 19;
            nome = "Hamburguer";
            break;
        case 3:
            simples = 6;
            duplo = 11;
            nome = "Misto Quente";
            break;        
    }

    return {simples, duplo, nome};
}






