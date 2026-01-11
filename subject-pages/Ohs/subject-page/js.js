gsap.to("#my-circle", { 
  duration: 2, 
  x: 100, 
  fill: "green", 
  repeat: -1, 
  yoyo: true 
});
function rebuildParaByIndex(speed = 80) {
  const para = document.querySelector(".mhm");
console.log(para);

//   if (!para || !learnbtn) return;
let a=0;
while( a>1){

    const text = para.textContent;
    const charArray = [];
    
    // text → array
    for (let i = 0; i < text.length; i++) {
        charArray.push(text[i]);
        console.log(text[i])  
    }
    
    // paragraph empty
    para.innerHTML = "";
    
    // Remove existing event listener if any to prevent multiple bindings
    //   learnbtn.replaceWith(learnbtn.cloneNode(true));
    
    
    for(let i=0;i<text.length;i++){
        setTimeout(()=>{
            
          para.textContent+=(text[i]);

            console.log(i,text[i])        // console.log(para.innerHTML)
        },i*speed);
        // para.
    }
// a++;
console.log('33')
}  //loop closing

    // let outbox1=document.querySelector(".info");
    // let outbox2=document.querySelector(".sub-info");
    
    
    
    // newLearnBtn.remove();
    // outbox1.style.boxShadow="inset 0px 0px 10px var(--b-h-text)";
    // outbox2.style.boxShadow="0px 0px 10px var(--b-l-text)";
    
    //       for (let i = 0; i < charArray.length; i++) {
        //         setTimeout(() => {
            //           // span create
            //           const span = document.createElement("span");
            //           span.textContent = charArray[i];
            //           span.style.color = "#0a3cff"; // dark blue (current)
            //           para.appendChild(span);
            
            //           const spans = para.querySelectorAll("span");
            
            //           // last 3 indexes color logic
            //           spans.forEach((s, index) => {
                //             const diff = spans.length - 1 - index;
                //             if (diff === 0) {
                    //               s.style.color = "var(--b-h-text)"; // current
                    //             } else if (diff === 1) {
                        //               s.style.color = "var(--b-m-text)";
                        //             } else if (diff === 2) {
                            //               s.style.color = "var(--b-l-text)";
                            //             } else if (diff === 3) {
    //               s.style.color = "var(--w-color)";
    //             } else {
        //               s.style.color = "var(--w-color)"; // white
        //             }
        //           });
        
        // If last character, change all to white after delay
        //   if (i === charArray.length - 1) {
            //     setTimeout(() => {
                //       spans.forEach(s => s.style.color = "#ffffff");
                //     }, 500);
                //   }
                // }, i * speed);
    //   }
    
  
}

// Call the function to initialize
rebuildParaByIndex(60);