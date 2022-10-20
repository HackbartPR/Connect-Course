document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("btn").addEventListener("click", (e)=> changeText(e));
})

const changeText = (e)=>{
    e.srcElement.innerText = "Meu Segundo Botão";
}