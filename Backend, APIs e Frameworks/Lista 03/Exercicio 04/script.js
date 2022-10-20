document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("btn").addEventListener("click", startFunction);
})

const startFunction = ()=>{
    let text = document.getElementById("input").value;

    let length = text.length;

    length == 11 ? cpfValid() :  cpfInvalid();
}

const cpfValid = ()=>{
    let confirm = window.confirm("Deseja Continuar?");

    let text = document.getElementById("text");
    text.style.color = "green";
    text.innerText = "CPF Válido";
    
    if(!confirm){
        text.style.color = "gray";
        text.innerText = "Operaçao Cancelada";  
    }
}

const cpfInvalid = ()=>{
    window.alert("CPF Inválido");

    let text = document.getElementById("text");
    text.style.color = "red";
    text.innerText = "Erro: CPF Inválido"; 
}
