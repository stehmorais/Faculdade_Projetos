<?php 
// usando informações em outra página
session_start();

echo $_SESSION['cor']."<br>".$_SESSION['carro']."<br>".session_id();

// a sessão é finalizada quando fechamos o navegador e o id é trocado
?>