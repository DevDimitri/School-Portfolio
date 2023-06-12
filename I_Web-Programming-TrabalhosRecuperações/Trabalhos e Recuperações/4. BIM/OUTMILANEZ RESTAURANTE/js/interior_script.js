var el = document.querySelector("#interiortxt");
var text = "O Outback Steakhouse é um dos restaurantes de fachada mais famosos e é encontrado em todo o mundo. O interior deste restaurante é decorado com paredes e vigas de tijolo aparente. O teto é adornado com luzes cintilantes e cristais pendurados. Um fogo crepitante aquece os hóspedes enquanto eles jantam sob um teto abobadado de vigas expostas. Do lado de fora, animais brincalhões descansam nas rochas ou nas árvores - aumentando a atmosfera de chalé.";
var interval = 25;
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