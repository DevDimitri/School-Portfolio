var el = document.querySelector("#cozinhatxt");
var text = "Alguns dos itens que podem melhorar especialmente esta atmosfera incluem música ao vivo, uma grande entrada, decoração elegantemente ornamentada e candelabros. Em essência, esses elementos criam uma sensação de luxo, estilo, classe e refinamento que complementa praticamente qualquer corte de carne bovina. A combinação da herança musical do outback, arquitetura do lodge e música clássica refinada faz desta popular churrascaria um dos melhores interiores do país.";
var interval = 35;
function showtext(el, text, interval) {
  var char = text.split("").reverse();
  
  var typer = setInterval(function() {
  
    if (!char.length) {
        return clearInterval(typer)
    }
    
    var next = char.pop();
    
    el.innerHTML += next;
    
  }, interval);
  
}
showtext(el, text, interval);