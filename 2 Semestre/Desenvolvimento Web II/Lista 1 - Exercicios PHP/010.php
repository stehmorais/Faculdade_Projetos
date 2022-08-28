<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Crie uma função com o nome calculo_media.
*/

//declaração da minha função e parâmetros

function calculo_media($nota_1,$nota_2){
    $soma = $nota_1 + $nota_2;
    $media = $soma / 2;

    if($media <= 4.9){
        echo 'Aluno reprovado' . '<br>' . PHP_EOL;
    }else if($media >= 5 && $media <=7){
        echo 'Aluno de recuperação' . '<br>' . PHP_EOL;
    }else if($media > 7){
     echo 'Aluno apvovado' . '<br>' . PHP_EOL;
}

    echo 'A média de ' . $nota_1 . ' e ' . $nota_2 . ' é: ' . $media . '<br>' . PHP_EOL;

    // return $media;
}

//definindo os valores para as variaveis 
echo calculo_media(9,4);



?>