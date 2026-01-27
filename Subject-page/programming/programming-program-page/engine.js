console.log("**Welcome on cit dae**");

// =========================
// CODE TOGGLE SYSTEM
// =========================

function setupToggle(btnSelector, codeSelector) {
  const btn = document.querySelector(btnSelector);
  const code = document.querySelector(codeSelector);

  let isOpen = false;

  if (!btn || !code) return;

  btn.addEventListener("click", () => {
    isOpen = !isOpen;

    if (isOpen) {
      openCode(code, btn);
    } else {
      closeCode(code, btn);
    }
  });
}

// =========================
// OPEN / CLOSE FUNCTIONS
// =========================

function openCode(code, btn) {
  btn.style.color = "var(--gr-l-color)";

  code.style.padding = "10px 5px";
  code.style.width = "100%";
  code.style.height = "100%";
  code.style.overflow = "auto";
  code.style.backgroundColor = "var(--bg-color)";
  code.style.marginLeft = "10px";
  code.style.opacity = "0";

  setTimeout(() => {
    code.style.opacity = "1";
  }, 300);
}

function closeCode(code, btn) {
  btn.style.color = "var(--gr-h-color)";

  code.style.padding = "0";
  code.style.width = "0";
  code.style.height = "0";
  code.style.overflow = "hidden";
  code.style.backgroundColor = "";
  code.style.marginLeft = "0";
  code.style.opacity = "0";
}

// =========================
// INIT BOXES
// =========================

setupToggle(".hh1", ".code1");
setupToggle(".hh2", ".code2");
setupToggle(".hh3", ".code3");
setupToggle(".hh4", ".code4");
setupToggle(".hh5", ".code5");
setupToggle(".hh6", ".code6");
setupToggle(".hh7", ".code7");
setupToggle(".hh8", ".code8");
setupToggle(".hh9", ".code9");
setupToggle(".hh10", ".code10");
setupToggle(".hh11", ".code11");
// setupToggle(".hh12", ".code12");
setupToggle(".hh13", ".code13");
setupToggle(".hh14", ".code14");
setupToggle(".hh15", ".code15");
setupToggle(".hh16", ".code16");
setupToggle(".hh17", ".code17");
setupToggle(".hh18", ".code18");
setupToggle(".hh19", ".code19");
setupToggle(".hh20", ".code20");
setupToggle(".hh21", ".code21");
setupToggle(".hh22", ".code22");
setupToggle(".hh23", ".code23");
setupToggle(".hh24", ".code24");
setupToggle(".hh25", ".code25");
setupToggle(".hh26", ".code26");
setupToggle(".hh27", ".code27");
setupToggle(".hh28", ".code28");

{
let bkBtn = document.getElementById("back-btn-bx"); 
console.log(bkBtn);
if (bkBtn) {
    bkBtn.addEventListener("click", () => {
        window.location.href = "../subject-page/subject-page.html";
    });
}
}


const sleep = (ms) => new Promise(res => setTimeout(res, ms));

async function typeAnimation() {
    let container = document.querySelector(".mhm");
    if (!container) return;

    // Original text nikaal kar container khaali kar dein
    let fullText = container.innerText;
    container.innerText = "";

    // 1. Pointer (Cursor) Create karein
    let cursor = document.createElement("span");
    cursor.innerText = "|";
    cursor.style.fontWeight = "bold";
    cursor.style.display = "inline-block";
    cursor.style.marginLeft = "2px";
    cursor.style.animation = "blink 0.7s infinite"; // Blinking effect
    
    // CSS for blinking (Aap apni CSS file mein bhi daal sakte hain)
    const style = document.createElement('style');
    style.innerHTML = `
        @keyframes blink {
            0% { opacity: 1; }
            50% { opacity: 0; }
            100% { opacity: 1; }
        }
    `;
    document.head.appendChild(style);

    // Text ke liye ek alag span banate hain taaki cursor hamesha aakhir mein rahe
    let textSpan = document.createElement("span");
    container.appendChild(textSpan);
    container.appendChild(cursor);

    while (true) {
        // Typing Phase
        for (let i = 0; i <= fullText.length; i++) {
            textSpan.innerText = fullText.substring(0, i);
            await sleep(150);
        }

        await sleep(1500); // Word complete hone par thoda rukna

        // Deleting Phase
        for (let i = fullText.length; i >= 0; i--) {
            textSpan.innerText = fullText.substring(0, i);
            await sleep(50);
        }
        
        await sleep(500); // Dobara start hone se pehle pause
    }
}

typeAnimation();