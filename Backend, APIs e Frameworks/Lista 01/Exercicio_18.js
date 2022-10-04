let string = ("           1        \n");
string += ("         _____      \n");
string += ("   |    /       \\     \n");
string += (" 2|   /         \\    \n");
string += ("   |  /           \\   \n");
string += ("   | /_________\\  \n");
string += ("           3        \n");

string += "\nDIGITE AS DIMENSOES ,EM METROS, DO TRAPEZIO INDICADAS PELOS NUMEROS: \n\n";

let smallBase = prompt(string + "1 - BASE MENOR: ");

let height = prompt(string + "2 - ALTURA: ");

let bigBase = prompt(string + "3 - BASE MAIOR: ");

let area = ((bigBase + smallBase) * height) / 2;
alert(`A AREA DO TRAPEZIO INDICADO E DE ${area} METROS QUADRADOS`);


