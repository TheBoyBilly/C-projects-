//RANDOM NUMBER GENERATOR

const myButton = document.getElementById("myButton");
const myLabel1 = document.getElementById("myLabel1");
const myLabel2 = document.getElementById("myLabel2");
const myLabel3 = document.getElementById("myLabel3");
const max = 6;
const min = 1;
let randomNumber1;
let randomNumber2;
let randomNumber3;


myButton.onclick = function() {
    randomNumber1 = Math.floor(Math.random() * max) + 1;
    randomNumber2 = Math.floor(Math.random() * max) + 1;
    randomNumber3 = Math.floor(Math.random() * max) + 1;
    myLabel1.textContent = randomNumber1;
    myLabel2.textContent = randomNumber2;
    myLabel3.textContent = randomNumber3;
}
