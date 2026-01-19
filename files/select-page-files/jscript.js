
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

// // //responsive redirect
// if (window.innerWidth < 850) {
// let clock=document.querySelector(".clock-box");
// clock.style.width="0px";
// clock.style.height="0px";
// clock.style.padding="0px 0px";
// clock.style.overflow="hidden";
//   window.location.href = 'https://fireflow444.github.io/Tevta-sallybus-portal/error/faludpage.html';
// }

{
let bkBtn=document.querySelector(".hm");
console.log(bkBtn);
bkBtn.addEventListener("click",()=>{
window.location.href="../../../Homepage.html";
});

}
  // 🎯 Target date & time
  const targetTime = new Date("2026-01-22T01:15:00");

  function updateClock() {
    const now = new Date();

    // Live date & time
    document.getElementById("liveDateTime").innerText =
      now.toLocaleString();

    // Remaining time calculation
    let diff = targetTime - now;

    if (diff <= 0) {
      document.getElementById("remainingTime").innerText =
        "⏰ Time Reached";
      return;
    }

    const seconds = Math.floor(diff / 1000) % 60;
    const minutes = Math.floor(diff / (1000 * 60)) % 60;
    const hours = Math.floor(diff / (1000 * 60 * 60)) % 24;
    const days = Math.floor(diff / (1000 * 60 * 60 * 24));

    document.getElementById("remainingTime").innerText =
      `${days}d ${hours}h ${minutes}m ${seconds}s`;
  }

  updateClock();
  setInterval(updateClock, 1000);



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
   
    }, 3000);
    setTimeout(() => {
      gttk.style.left = "-120vw";
      gttk.style.height = "0vh";
      gttk.style.width = "0vw";    
    }, 3100);

  });
}
