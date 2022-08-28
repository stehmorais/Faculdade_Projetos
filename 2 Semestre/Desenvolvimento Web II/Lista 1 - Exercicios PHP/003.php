<?php
/*
Escreva um script que imprima qual o maior número.
Converter variáveis strings em inteiros
Use IF
*/
$a = "10";
$b = "1";

if ($a > $b){
    echo 'O maior numero é a:'. $a  . '<br>';
    $a = intval ($a);
    echo 'Tipo: ';
    var_dump($a);
}else {
    echo 'O maior numero é b:'. $b . '<br>';
    $b = intval ($b);
    echo 'Tipo: ';
    var_dump($b);
}

?>