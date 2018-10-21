const helloWorld = () => {  
  let hello = ["H","e","l","l","o"," "];
  let world = ["W","o","r","l","d","!"];

  return [...hello, ...world].join('');
}

console.log(helloWorld());
