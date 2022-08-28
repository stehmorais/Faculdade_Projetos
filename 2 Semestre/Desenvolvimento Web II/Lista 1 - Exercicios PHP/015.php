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
Crie validações na função, para que os parâmetros aceitos estejam 
entre 0 e 10.
Crie constantes para os limites ( 0 e 10 )
*/

function calculo_media($nota_1, $nota_2){
    $soma = $nota_1 + $nota_2;
    $media = $soma / 2;
    if($nota_1 >0 && $nota_1 <=10 && $nota_2 >0 && $nota_2 <=10 ){
        if($media <= 4.9){
            echo 'Aluno reprovado' . '<br>' . PHP_EOL;
        }else if($media >= 5 && $media <=7){
            echo 'Aluno de recuperação' . '<br>' . PHP_EOL;
        }else if($media > 7){
            echo 'Aluno apvovado' . '<br>' . PHP_EOL;
        }

        echo 'A média de ' . $nota_1 . ' e ' . $nota_2 . ' é: ' . $media . '<br>' . PHP_EOL;
}else{
    echo 'Numero não esta entre 0 e 10';
}

    // return $media;
}

//definindo os valores para as variaveis 
echo calculo_media(15,12);




?>