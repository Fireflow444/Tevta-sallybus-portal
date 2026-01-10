console.log("**Welcome on cit dae**");

// box1
{
	let box1=document.querySelector(".hh1");
console.log(box1);

{
let click=false;
let p=document.querySelector(".pre");
let code1=document.querySelector(".code1");
let btn1=document.querySelector(".hh1");
box1.addEventListener("click",()=>{

if(click === false){
click=true;
// console.log("open")
codeon(code1,btn1,p);
}
else{
	click=false;
// console.log("close")
codeoff(code1,btn1,p);
}

// console.log(click)

});
}
}
// box2
{
	let box2=document.querySelector(".hh2");
// console.log(box2/);

{
	let p=document.querySelector(".pre");
let code2=document.querySelector(".code2");
let click=false;
let btn2=document.querySelector(".hh2");
box2.addEventListener("click",()=>{

if(click === false){
click=true;
// console.log("open")
codeon(code2,btn2,p);
}
else{
	click=false;
// console.log("close")
codeoff(code2,btn2,p);
}

// console.log(click)

});
}
}
// box3
{
	let box3=document.querySelector(".hh3");
// console.log(box3);

{
	let p=document.querySelector(".pre");
let code3=document.querySelector(".code3");
let click=false;
let btn3=document.querySelector(".hh3");
box3.addEventListener("click",()=>{

if(click === false){
click=true;
// console.log("open")
codeon(code3,btn3,p);
}
else{
	click=false;
// console.log("close")
codeoff(code3,btn3,p);
}

// console.log(click)

});
}
}


function codeon(code,btn1/*button*/,p){
	click=0;
	p=click;

	// console.log(p);
btn1.style.color="var(--gr-l-color)";
	code.style.padding="10px 5px";
	code.style.width="90%";
	code.style.height="100%";
	code.style.overflow="auto";
	code.style.backgroundColor="var(--bg-color)";
	code.style.marginLeft="10px";
	code.style.opacity="0%";
setTimeout(()=>{
	code.style.opacity="100%";
},300);

}
function codeoff(code,btn1/*button*/,p){
	click=0;
	p=click;
btn1.style.color="var(--gr-h-color)";
	code.style.padding="0px 0px";
    code.style.width="0px";
	code.style.height="0px";
	code.style.overflow="hidden";
	code.style.backgroundColor="";
	code.style.marginLeft="0px";
	code.style.opacity="0%";
setTimeout(()=>{
	code.style.opacity="0%";
},300);

}
// dowload
{
let dow=document.querySelector(".dowl");
dow.addEventListener("click",()=>{
let chicon1=document.getElementById("dwn1");
console.log(chicon1);
chicon1.classList.add("dowl-ani");
let chicon2=document.getElementById("dwn2");
console.log(chicon2);
chicon2.classList.add("dowl-ani");
setTimeout(() => {
    console.log("hello");
    
    // 1. Anchor element create kiya
    let link = document.createElement('a'); 
    
    // 2. File ka path set kiya
    link.href = "./program/data.txt"; 
    
    // 3. Download attribute (Sahi spelling ke sath)
    link.download = "data.txt"; 
    
    // 4. Link ko body mein add karke click karwana zaroori hai
    document.body.appendChild(link);
    link.click();
    
    // 5. Click ke baad remove kar den takay DOM saaf rahe
    document.body.removeChild(link);
    
}, 4000);
});

}
