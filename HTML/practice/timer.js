let startBtn = document.querySelector('.startBtn');
let pause = document.querySelector('.pauseBtn');
let con = document.querySelector('.continueBtn');
let restart = document.querySelector('.restartBtn');
let clock = document.querySelector('.clock');

let key;


let second = 0, minutes = 0, hours = 0;
let startTimer = (event) => {
    
    second += 1;
    if(second == 60) minutes += 1 , second = 0;
    if(minutes == 60) hours += 1, minutes = 0;
    
    let hoursText = hours < 10 ? '0'+ hours.toString() : hours;
    let minutesText = minutes < 10 ? '0'+ minutes.toString() : minutes;
    let secondText = second < 10 ? '0'+ second.toString() : second;
    clock.textContent = hoursText+':'+minutesText+':'+secondText;
    
}
let intervalId;
startBtn.addEventListener('click',() => {
    intervalId = setInterval(startTimer, 1000);
})

pause.addEventListener('click', () => {
    clearInterval(intervalId);
})

con.addEventListener('click', () => {
    clearInterval(intervalId);
    intervalId = setInterval(startTimer, 1000);

})

restart.addEventListener('click', () => {
    clearInterval(intervalId);
    second = 0, minutes = 0, hours = 0;
    intervalId = setInterval(startTimer, 1000);

})



