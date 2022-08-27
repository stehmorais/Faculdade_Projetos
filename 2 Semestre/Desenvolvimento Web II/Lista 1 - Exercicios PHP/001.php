<?php
/*
Variáveis 
*/
//Exercicio: Imprimir o valor a variável e o seu tipo

$variavel_1 = 'texto';
echo ('O valor da variavel 1 é: ') . $variavel_1 . '<br>';
echo ('O seu tipo é:') .PHP_EOL;
echo gettype($variavel_1) . '<br> <br>' .PHP_EOL;

$variavel_2 = 123;
echo ('O valor da variavel 2 é: ') . $variavel_2 . '<br>';
echo ('O seu tipo é:') .PHP_EOL;
echo gettype($variavel_2) . '<br> <br>' .PHP_EOL;

$variavel_3 = 1;
echo ('O valor da variavel 3 é: ') . $variavel_3 . '<br>';
echo ('O seu tipo é:') .PHP_EOL;
echo gettype($variavel_3) . '<br>' .PHP_EOL;


$array = [
    "foo" => "bar",
    "bar" => "foo",
];
echo('O valor do array e seus tipos são:') . '<br>' .PHP_EOL;
var_dump($array);

?>