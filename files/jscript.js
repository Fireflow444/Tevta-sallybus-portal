{
 let bt=document.querySelector(".scroll-track");
    // bt.style.transform="translateX(0px)";
    let p=0;
    let trn=[0,-400,-800,-400,0];
    // while()
    let i=0;
function loopAds(){
 // console.log(i)
    setTimeout(()=>{ bt.style.transform=`translateX(${trn[1]}px)`; },4000);
    setTimeout(()=>{ bt.style.transform=`translateX(${trn[2]}px)`; },8000);
    setTimeout(()=>{ bt.style.transform=`translateX(${trn[3]}px)`; },12000);
    setTimeout(()=>{ bt.style.transform=`translateX(${trn[4]}px)`; },16000);
       setTimeout(loopAds,16000);
       
   
   
}
   loopAds();
 }


{
let psize=document.querySelector(".body").style.offsetWidth;
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

// if(width>600){
//    document.location.href = 'https://fireflow444.github.io/Tevta-sallybus-portal/error/faludpage.html';     
//  }

}
// // typing effect function

// function rebuildParaByIndex(paraId, speed = 100) {
//   const para = document.querySelector(".pr");

//   if (!para) {
//     console.log("Paragraph not found");
//     return;
//   }

//   const text = para.textContent;
//   const charArray = [];

//   // chars array mein store
//   for (let i = 0; i < text.length; i++) {
//     charArray.push(text[i]);
//   }

//   // paragraph empty
//   para.textContent = "";

// {
// 	let learnbtn=document.querySelector(".learn-btn");
//   learnbtn.addEventListener("click",()=>{
// //  typing effect

//   for (let i = 0; i < charArray.length; i++) {
//     setTimeout(() => {
//       para.textContent += charArray[i];
//     }, i * speed);
//   }
// learnbtn.remove();
//   });

// }
// }

// // function call
// rebuildParaByIndex("myPara", 80);
function rebuildParaByIndex(speed = 80) {
  const para = document.querySelector(".pr");
  const learnbtn = document.querySelector(".learn-btn");

  if (!para || !learnbtn) return;

  const text = para.textContent;
  const charArray = [];

  // text → array
  for (let i = 0; i < text.length; i++) {
    charArray.push(text[i]);
  }

  // paragraph empty
  para.innerHTML = "";

  // Remove existing event listener if any to prevent multiple bindings
  learnbtn.replaceWith(learnbtn.cloneNode(true));
  const newLearnBtn = document.querySelector(".learn-btn");

  newLearnBtn.addEventListener("click", () => {
    // let mainCont=document.querySelector("");
let outbox1=document.querySelector(".info");
let outbox2=document.querySelector(".sub-info");


    setTimeout(() => {
    newLearnBtn.remove();
outbox1.style.boxShadow="inset 0px 0px 10px var(--b-h-text)";
outbox2.style.boxShadow="0px 0px 10px var(--b-l-text)";
outbox1.style.height="300px";
outbox1.style.overflow="auto";

      for (let i = 0; i < charArray.length; i++) {
        setTimeout(() => {
          // span create
          const span = document.createElement("span");
          span.textContent = charArray[i];
          span.style.color = "#0a3cff"; // dark blue (current)
          para.appendChild(span);

          const spans = para.querySelectorAll("span");

          // last 3 indexes color logic
          spans.forEach((s, index) => {
            const diff = spans.length - 1 - index;
            if (diff === 0) {
              s.style.color = "var(--b-h-text)"; // current
            } else if (diff === 1) {
              s.style.color = "var(--b-m-text)";
            } else if (diff === 2) {
              s.style.color = "var(--b-l-text)";
            } else if (diff === 3) {
              s.style.color = "var(--w-color)";
            } else {
              s.style.color = "var(--w-color)"; // white
            }
          });

          // If last character, change all to white after delay
          if (i === charArray.length - 1) {
            setTimeout(() => {
              spans.forEach(s => s.style.color = "#ffffff");
            }, 500);
          }
        }, i * speed);
      }
    }, 500); // delay before starting animation
  });
}

// Call the function to initialize
rebuildParaByIndex(60);