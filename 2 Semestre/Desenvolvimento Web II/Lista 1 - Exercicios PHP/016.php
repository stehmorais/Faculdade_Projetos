<?php
/*
Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o número seja 
Se estiver fora do intervalo, informar que não existe o mês

Utilize array.
*/

$array = [
    "m1" => 1,
    "m2" => 2,
    "m3" => 3,
    "m4" => 4,
    "m5" => 5,
    "m6" => 6,
    "m7" => 7,
    "m8" => 8,
    "m9" => 9,
    "m10" => 10,
    "m11" => 11,
    "m12" => 12,
];

$numero = 8;

if ($numero == $array["m1"]) {
    echo 'Janeiro';
} else if ($numero == $array["m2"]) {
    echo "Fevereiro";
}else if ($numero == $array["m3"]){
    echo "Março";
}else if($numero == $array["m4"]){
    echo "Abril";
}else if($numero == $array["m5"]){
    echo "Maio";
}else if($numero == $array["m6"]){
    echo "Junho";
}else if($numero == $array["m7"]){
    echo "Julho";
}else if($numero == $array["m8"]){
    echo "Agosto";
}else if($numero == $array["m9"]){
    echo "Setembro";
}else if($numero == $array["m10"]){
    echo "Outubro";
}else if($numero == $array["m11"]){
    echo "Novembro";
}else if($numero == $array["m12"]){
    echo "Dezembro";
}


?>