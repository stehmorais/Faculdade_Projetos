<?php 
// servem para armazenar informações que poderao ser utilizadas em várias páginas ex: sistemas de login, carrinho de compra
session_start();

$_SESSION['cor'] = "Roxo";
$_SESSION['carro'] = "Camaro";

echo $_SESSION['cor']."<br>".$_SESSION['carro']."<br>".session_id();

?>