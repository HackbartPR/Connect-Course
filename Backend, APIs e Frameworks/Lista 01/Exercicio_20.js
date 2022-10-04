let string = ("        1       \n");
string += ("            /|\\     \n");
string += ("          /  |  \\    \n");
string += ("        /    |    \\   \n");
string += ("      /      |      \\  \n");
string += (" 2 /_____ ____  \\ \n");
string += ("    \\        |        /  \n");
string += ("      \\      |      /   \n");
string += ("        \\    |    /    \n");
string += ("          \\  |  /    \n");
string += ("            \\|/    \n");
string += "\nDIGITE AS DIMENSOES ,EM METROS, DO LOSANGULO INDICADAS PELOS NUMEROS: \n";

let bigBase = prompt(string + "1 - DIAGONAL MAIOR: ");

let smallBase = prompt(string + "2 - DIAGONAL MENOR: ");

let area = (smallBase * bigBase) / 2;

alert(`A AREA DO LOSANGULO INDICADO E DE ${area} METROS QUADRADOS`);