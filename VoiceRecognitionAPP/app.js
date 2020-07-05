const btn = document.querySelector(".talk");
const content = document.querySelector(".content");

const sr = window.SpeechRecognition || window.webkitSpeechRecognition;
const rec = new sr();

rec.onstart = () => {
  console.log("voice recognition is tart")
}

rec.onresult = (event) => {
  console.log(event)
}

btn.addEventListener("click", () => {
  rec.start();
});