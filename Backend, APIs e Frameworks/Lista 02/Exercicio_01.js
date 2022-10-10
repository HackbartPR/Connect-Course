var caixa = {
    vendas: [],
    valor: 0
};

let quantidade = 0;
do{
    quantidade = parseInt(prompt(`Promoção:
                        \n1x Cachorro Quente: R$8,00
                        \n2x Cachorros Quentes: R$15,00
                        \nQuantidade que Deseja Comprar: `));

    comprar(quantidade);
    continuar = confirm("Deseja Continuar?");

}while(continuar)

mostrarValores(caixa);

function mostrarValores(obj){
    let string = "";
    obj.vendas.forEach((venda,index)=>{
        string += `Venda ${index+1}:
                Quantidade: ${venda.quantidade}
                Valor: ${venda.valor}\n\n`;
    })

    alert(`Valor em Caixa: ${obj.valor}\n\n${string}`);
}

function comprar(quantidade){
    let comDesconto = 0;
    let semDesconto = 0;

    if(quantidade % 2 == 0){
        comDesconto = quantidade / 2;
    }else{
        comDesconto = (quantidade - 1) / 2;
        semDesconto = 1;
    }

    let valor = (comDesconto * 15) + (semDesconto * 8);

    let venda = {
        quantidade: quantidade,
        valor: valor
    }

    caixa.vendas.push(venda);
    caixa.valor += valor;
}






