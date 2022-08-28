<?php
/*
Escreva um script que imprima qual o maior número.
Use IF .. ELSE
*/
$a = 60;
$b = 30;
$c = 10;

if($a > $b && $a > $c){
    echo 'o: ' . $a . ' que está em a, é o maior numero.' . '<br>';
}else if($b > $a && $b > $c){
    echo 'o: ' . $b . ' que está em b, é o maior numero.' . '<br>';
}else{
    echo 'o: ' . $c . ' que está em c, é o maior numero.' . '<br>'; 
}

?>