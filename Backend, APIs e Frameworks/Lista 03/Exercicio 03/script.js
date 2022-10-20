document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("btn").addEventListener("click", startFunction);
})

const startFunction = ()=>{
    let text = document.getElementById("input").value;
    window.alert(text);
}
