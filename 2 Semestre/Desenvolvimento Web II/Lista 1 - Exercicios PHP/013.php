<?php
/*
Crie uma função que demonstre 
 - Passagem por valor.
 - Passagem por referência.

 
*/

function por_valor($variavel_numb, $valor){
    $variavel_numb += $valor;
}

function por_referencia(&$variavel_numb, $valor){
    $variavel_numb += $valor;
}

$numb = 5;
por_valor($numb,10);
echo 'Por valor: ' . $numb . "<br>";

por_referencia($numb, 10);
echo 'Por referência: ' . $numb . "<br>";


?>