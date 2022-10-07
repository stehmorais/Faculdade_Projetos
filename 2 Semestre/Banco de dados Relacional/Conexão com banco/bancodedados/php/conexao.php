<?php
// Conectando bando de dados

//variavel com dados do meu banco de dados
$servername = "localhost"; // endereço do nosso servidor local
$username = "root"; // login phpmyadmin
$password = ""; // login phpmyadmin
$db_name = "empresa2";  // nome do meu banco de dados 

$connect = mysqli_connect($servername, $username, $password);

mysqli_set_charset($connect, 'utf8');

// verificando se há erros de conexão com o banco
if(mysqli_connect_error()):
    echo "Falha na conexão: ".mysqli_connect_error();
endif;

// Conexão com o banco
$banco = mysqli_select_db($connect, $db_name);

// verificando se há erros de conexão com o banco v2
if (!$banco)
    die("Erro com o banco -> ".mysqli_error());


