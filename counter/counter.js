let plus = document.querySelector('.increase');
let minus = document.querySelector('.decrease');
let result = document.querySelector('.result');
let reset = document.querySelector('.reset');



function showResult() {
    result.innerHTML = c;
    changeColor();
}

let c = 0;
function doIncrease() {
    c++;
    showResult();
    changeColor();
};

function doDecrease() {
    c--;
    showResult();
    changeColor();
};

function doReset() {
    c = 0;
    showResult();
    
}

function changeColor() {
    if (c > 0) {
        result.style.color = '#4169e1';
    } 
    
    if (c < 0) {
        result.style.color = '#ff0000';
    } 

    if (c == 0) {
        result.style.color = 'black';
    }
}


plus.addEventListener("click", doIncrease);

minus.addEventListener('click', doDecrease);

reset.addEventListener('click',doReset);

