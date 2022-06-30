let line1 = document.querySelector('.line1');
let line3 = document.querySelector('.line3');
let line2 = document.querySelector('.line2');
let line_container = document.querySelector('.lineContainer');
let menu_container = document.querySelector('.menuContainer');
let liTags = document.querySelectorAll('li');

line_container.addEventListener('click',() => {
    if(line_container.classList.contains('isOpen')) {
        line_container.classList.remove('isOpen');
        menu_container.classList.remove('showMenuLayout');
        line2.classList.remove('hideLine2');
        line1.classList.remove('line1Rotate');
        line3.classList.remove('line3Rotate');
        for(let i = 0; i < liTags.length; i++) {
            liTags[i].classList.remove('moveLi');
        }

    } else {
        line_container.classList.add('isOpen');
        line2.classList.add('hideLine2');
        line1.classList.add('line1Rotate');
        line3.classList.add('line3Rotate');
        menu_container.classList.add('showMenuLayout');
        for(let i = 0; i < liTags.length; i++) {
            liTags[i].classList.add('moveLi');
        }

    }
    

})