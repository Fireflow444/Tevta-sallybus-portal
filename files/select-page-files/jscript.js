// body size measuring
const myElement = document.body;

const width = myElement.offsetWidth;
const height = myElement.offsetHeight;

// Using getBoundingClientRect()
const rect = myElement.getBoundingClientRect();
const rectWidth = rect.width;
const rectHeight = rect.height;

console.log(`Offset Dimensions: ${width}px x ${height}px`);
console.log(`ClientRect Dimensions: ${rectWidth}px x ${rectHeight}px`);

//responsive redirect
if (window.innerWidth > 600) {
  window.location.href = 'https://fireflow444.github.io/Tevta-sallybus-portal/error/faludpage.html';
}

// home page button
let hmbtn = document.querySelector(".hm");
if (hmbtn) {
  hmbtn.addEventListener("click", () => {
    window.location.href = 'https://fireflow444.github.io/Tevta-sallybus-portal/Homepage.html';
  });
}

// tiktok button
let tkbtn = document.querySelector(".tk");
if (tkbtn) {
                  //event listener
  tkbtn.addEventListener("click", () => {
    let gttk = document.querySelector(".gt-tk");
    if (gttk) {
      gttk.style.left = "0px";
      gttk.style.height = "100vh";
      gttk.style.width = "100vw";
    }

    setTimeout(() => {
      window.location.href = 'https://www.tiktok.com/@tevta3daecit0';
   
    }, 2500);
    setTimeout(() => {
      gttk.style.left = "-120vw";
      gttk.style.height = "0vh";
      gttk.style.width = "0vw";    
    }, 3000);

  });
}
