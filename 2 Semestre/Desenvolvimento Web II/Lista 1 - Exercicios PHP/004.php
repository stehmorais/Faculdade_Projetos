<?php
/*
Escreva um script que imprima qual o maior número.
Use IF
*/
$a = 10;
$b = 1;
$c = 40;

if($a > $b && $a > $c){
    echo 'o: ' . $a . ' que está em a, é o maior numero.' . '<br>';
}else if($b > $a && $b > $c){
    echo 'o: ' . $b . ' que está em b, é o maior numero.' . '<br>';
}else{
    echo 'o: ' . $c . ' que está em c, é o maior numero.' . '<br>'; 
}

?>