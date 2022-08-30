const turnOn = document.getElementById ( 'ligar' );
const turnOff = document.getElementById ( 'desligar' );
let container = document.getElementById ('container')
const lamp = document.getElementById ( 'lampada' );

function noFunction () {
    return lamp.src.indexOf ( 'quebrada' ) > -1
}

function lampLigada () {
    if ( !noFunction () ) {
        lamp.src = './img/ligada.png';
        container.style.backgroundColor = "white"  
    }
}

function lampDesligada () {
    if ( !noFunction () ) {
        lamp.src = './img/desligada.png';
        container.style.backgroundColor = 'rgb(177, 174, 174)'
    }
}

function lampQuebrada () {
    lamp.src = './img/quebrada.png';
    container.style.backgroundColor = 'rgb(87, 85, 85)'
}

turnOn.addEventListener ( 'click', lampLigada );
turnOff.addEventListener ( 'click', lampDesligada );
lamp.addEventListener ( 'mouseover', lampLigada );
lamp.addEventListener ( 'mouseleave', lampDesligada );
lamp.addEventListener ( 'dblclick', lampQuebrada );