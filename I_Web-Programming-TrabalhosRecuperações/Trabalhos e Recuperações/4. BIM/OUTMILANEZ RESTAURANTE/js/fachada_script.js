var el = document.querySelector("#fachadatxt");
var text = "Uma visão familiar em todo o mundo, um restaurante de fachada (também chamado de fachada de restaurante ou show) apresenta um exterior impressionante que atrai os clientes. No entanto, o interior desses restaurantes difere do exterior de várias maneiras. As fachadas diferem em tamanho, forma e design para transmitir um tema específico e definir o cenário para o jantar. No interior, os esquemas de decoração podem ser caprichosos e ornamentados ou discretos e elegantes. Um restaurante de fachada pode ser uma experiência gastronômica relaxante - e também pode ser surpreendentemente bom se a decoração proporcionar uma boa atmosfera.";
var interval = 10;
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