const b1 = document.getElementById("1");
const b2 = document.getElementById("2");
const b3 = document.getElementById("3");
const b4 = document.getElementById("4");
const b5 = document.getElementById("5");
const b6 = document.getElementById("6");
var i=0;

b1.addEventListener('click', localstore);
b2.addEventListener('click', currTime);
b3.addEventListener('click', changeBG);
b4.addEventListener('click', reload);
b5.addEventListener('click', newtab);
b6.addEventListener('click', spam);


function spam(event){
	for(let i=0; i<100; i++){
		console.log("I did it!");
	}
}

function newtab(event){
	window.open("");
}

function reload(event){
	document.location.reload();
}

function changeBG(event){
	document.body.style.background="linear-gradient(to top left, #ff0000, #ffc0cb)";
}

function currTime(event){
	var d = new Date();
	let h = d.getHours();
	let m = d.getMinutes();
	let s = d.getSeconds();
	let time = h +':'+ m +':'+ s;
	alert(time);
}

function localstore(event){
	localStorage.setItem(i, i**2);
	console.log(localStorage.getItem(i))
	i++;
}