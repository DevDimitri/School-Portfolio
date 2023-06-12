var el = document.querySelector("#acouguetxt");
var text = "Além de sua decoração, o Outback possui um extenso cardápio que atende a todos os tipos de lanchonetes. Ele oferece diferentes opções para as necessidades de café da manhã, almoço, jantar e refeições noturnas. O restaurante também oferece opções para clientes sem glúten, Kosher e preocupados com a saúde. Suas diversas carnes incluem cordeiro, búfalo e filé mignon, além de outros cortes, como asas de frango e anéis de lula. Eles também oferecem opções de saladas, legumes e sobremesas, como cheesecakes e crepes. Além de suas carnes padrão, o Outback também vende carnes selecionadas vitrificadas ou grelhadas com perfeição para que tenham sabor de sobremesa.";
var interval = 45;
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