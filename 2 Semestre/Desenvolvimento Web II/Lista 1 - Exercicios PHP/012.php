<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Edite a função com o nome calculo_media.
*/
function calculo_media(float $nota_1, float $nota_2): float{
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

    return 0.0;
}
$nota_1 = 10;
$nota_2 = 3;

$media = calculo_media($nota_1, $nota_2);


?>