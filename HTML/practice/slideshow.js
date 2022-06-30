let imagePath = [
    "second.jpg", "img1.jpg", "img2.jpg", "img3.jpg", "img4.jpg"
];

let btn = document.getElementsByClassName('btn')[0];

let img = document.querySelector(".originImg");

counter = 0;
let changePhoto = () => {
    if(counter === 5) {
        origin = "Origin-img.jpg";
        img.src = origin;
        counter = 0;
        return;
    }
    img.src = imagePath[counter];
    counter++;
    console.log(counter);
}

btn.addEventListener("click",changePhoto);