let track = [{trackId:'Music/track(1).mp3',title:'Twae Way Nay Lar'}, 
{trackId:'Music/track(2).mp3', title:'A Htee Kyan Wyut Nyen'}, 
{trackId:'Music/track(3).mp3', title:'Mae Mar Par'}
];

let playBtn = document.querySelector('.playButton');
let pauseBtn = document.querySelector('.pauseButton');
let audioTag = document.querySelector(".audioTag");
let playlistContainer = document.querySelector('.playlistContainer');

let isPlaying = false;
for (let i = 0; i < track.length; i++) {
    trackDiv = document.createElement('div');

    trackDiv.addEventListener('click', () => {
    audioTag.src = track[i].trackId;
    audioTag.play();
    isPlaying = true;
    updatePlayAndPauseButton();
    });

    trackDiv.textContent = (i+1).toString()+". "+ track[i].title;
    playlistContainer.append(trackDiv);
    trackDiv.classList.add('trackItem');
};

let updatePlayAndPauseButton = () => {
    if (isPlaying) {
        pauseBtn.style.display = "inline";
        playBtn.style.display = "none";
    }
};




    

