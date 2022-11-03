let body = document.querySelector("body")

document.getElementById("btn").addEventListener("click", ()=> {
    console.table(idosos);

    let element = document.createElement('h3');
    element.innerText = "Olhe o console";

    body.appendChild(element);
});




