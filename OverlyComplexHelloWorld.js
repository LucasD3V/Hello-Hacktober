function consoling(){
  
  function hi(text){ 
    function globe(txt){
      return {value_1:`${txt}`,
              value_2: `world`};
    }
    return globe(`${text}`);
  }
  return hi(`hello`);
}

const myHello = consoling();
console.table(myHello);
console.log(`${ myHello.value_1} ${ myHello.value_2}!`);
