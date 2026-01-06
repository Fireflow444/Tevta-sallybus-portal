// let psize=document.querySelector(".body").style.offsetWidth;
console.log(psize);
const myElement = document.querySelector(".body");

// Using offsetWidth and offsetHeight
const width = myElement.offsetWidth;
const height = myElement.offsetHeight;

// Using getBoundingClientRect()
const rect = myElement.getBoundingClientRect();
const rectWidth = rect.width;
const rectHeight = rect.height;

console.log(`Offset Dimensions: ${width}px x ${height}px`);
console.log(`ClientRect Dimensions: ${rectWidth}px x ${rectHeight}px`);
if(width>600){
   document.location.href = 'https://fireflow444.github.io/Tevta-sallybus-portal/error/faludpage.html';     
 }