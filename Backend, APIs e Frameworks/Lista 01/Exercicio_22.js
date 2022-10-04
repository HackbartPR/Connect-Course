let number = prompt("DIGITE UM NUMERO INTEIRO DE 1 A 9 PARA CERIFICAR SUA TABUADA: ");

for(let i = 1; i <= 10; i++){
    let value = number * i;
    alert(`${number} x ${i} = ${value}`);
}