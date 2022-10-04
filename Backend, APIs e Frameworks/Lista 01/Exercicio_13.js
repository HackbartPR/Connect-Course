const FIRST_WEIGHT = 2;
const SECOND_WEIGHT = 3;

let first = prompt("DIGITE O PRIMEIRO NUMERO: ");

let second = prompt("DIGITE O SEGUNDO NUMERO: ");

let weightedAverage = ((first * FIRST_WEIGHT) + (second * SECOND_WEIGHT)) / (FIRST_WEIGHT + SECOND_WEIGHT);
alert(`A MEDIA PONDERADA ENTRE AS NOTAS ${first} E ${second} E IGUAL A ${weightedAverage}`);
