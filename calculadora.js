var n1 = document.getElementById ("n1");
var n2 = document.getElementById ("n2");
var soma = document.getElementById ("soma");
var result = document.getElementById ("result");

function Soma(n1, n2){
 var n1 = document.getElementById ("n1");
 var n2 = document.getElementById ("n2");
 var valor1 = n1.value
 var valor2 = n2.value

 var soma = parseInt(valor1) + parseInt(valor2) 
 document.getElementById("result").innerText = soma
}

const btnSoma = document.getElementById ("soma")
btnSoma.addEventListener ('click', Soma)