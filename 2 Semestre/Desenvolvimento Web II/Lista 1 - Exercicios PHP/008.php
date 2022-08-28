<?php
/*
Descrubra se $numero é :
 - Divisível por 10
 - Divisível por 3
 - Se não é divisível por nenhum destes 

Imprimir mensagem na tela do número e as condições acima.
*/
$numero = 150;

if ($numero % 10 == 0 && $numero % 3 == 0){
    echo $numero . ': é divisível por 10 e por 3' . '<br>' . PHP_EOL;
}else if($numero % 10 == 0 && $numero % 3 != 0){
    echo $numero . ': é divisel por 10, mais não por 3' . PHP_EOL;
}else if($numero % 10 != 0 && $numero % 3 == 0){
    echo $numero . ': é divisel por 3, mais não por 10' . PHP_EOL;
}else{
    echo $numero . ': não é divisivel nem por 3 nem por 10' . PHP_EOL;
}

// numeros que testei para testar novamente:
// 150 - por 10 e 3 | 280 - por 10 mais não por 3 | 15 - por 3 mais não por 10 | 13 - por nenhum deles 

?>