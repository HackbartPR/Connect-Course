document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("btn").addEventListener("click", startFunction);
})

const startFunction = ()=>{
    let name = window.prompt("Digite seu nome:");
    changeName(name);
}

const changeName = (name)=>{
    document.getElementById("newText").innerText = `Tenha um Bom Dia, Sr(a) ${name}`;
}