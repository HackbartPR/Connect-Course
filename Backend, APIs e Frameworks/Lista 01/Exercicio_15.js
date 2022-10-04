const PORCENT_SALES = 0.04;

let currentSalary = prompt("DIGITE O SALARIO FIXO: ");

let salesValue = prompt("DIGITE O VALOR DAS VENDAS REALIZADAS NESTE MES: ");

let salesProfit = salesValue * PORCENT_SALES;
let newSalary = currentSalary + salesProfit;

alert(`O SALARIO DESTE MES SERA DE R$${newSalary}, SENDO QUE NESTE VALOR ESTA INCLUSO A COMISSAO DE R$${salesProfit}`);
