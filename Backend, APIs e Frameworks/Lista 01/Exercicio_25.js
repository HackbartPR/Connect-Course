let string = "PARA CALCULAR A HIPOTENUSA DE UM TRIANGULO, SERA NECESSARIO INFORMAR OS VALORES DOS CATETOS.\n";

let opposite = prompt(string + "DIGITE O VALOR DO CATETO OPOSTO: ");

let adjacent = prompt(string + "DIGITE O VALOR DO CATETO ADJACENTE: ");

let hypotenuse = Math.sqrt(Math.pow(opposite, 2) + Math.pow(adjacent, 2));
alert(`CATETO ADJACENTE: ${adjacent} CATETO OPOSTO: ${opposite} HIPOTENUSA: ${hypotenuse}`);