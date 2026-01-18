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
  code.style.width = "90vw";
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
setupToggle(".hh12", ".code12");
setupToggle(".hh13", ".code13");
setupToggle(".hh14", ".code14");
setupToggle(".hh15", ".code15");
setupToggle(".hh16", ".code16");
setupToggle(".hh17", ".code17");
setupToggle(".hh18", ".code18");
setupToggle(".hh19", ".code19");
setupToggle(".hh20", ".code20");

{
let bkBtn = document.getElementById("back-btn-bx"); 
console.log(bkBtn);
if (bkBtn) {
    bkBtn.addEventListener("click", () => {
        window.location.href = "../subject-page/subject-page.html";
    });
}
}
