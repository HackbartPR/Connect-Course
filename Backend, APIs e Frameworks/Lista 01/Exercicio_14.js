const DISCOUNT = 0.9;

let oldPrice = prompt("DIGITE O PRECO ATUAL DO PRODUTO: ");

let newPrice = oldPrice * DISCOUNT;
alert(`COM DESCONTO DE 10% O PRODUTO QUE CUSTAVA R$${oldPrice} AGORA ESTA CUSTANDO R$${newPrice}`);
