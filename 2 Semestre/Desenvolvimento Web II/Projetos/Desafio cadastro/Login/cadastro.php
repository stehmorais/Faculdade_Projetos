<?php
session_start();

if (!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true) {
    header("location: index.php");
    exit;
}

?>

<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="author" content="Ester Morais">
    <meta name="description" content="Cadastro">
    <link rel="stylesheet" href="style.css">
    <title>Login</title>
</head>

<body>
    <div class="container">
        <div class="card-login">
            <h1>LOGIN</h1>
            <form action="parametros_post_cadastro.php" method="post">
                <div class="textfield">
                    <label for="name">Nome</label>
                    <input type="text" name="name" placeholder="Ester">
                </div>

                <div class="textfield">
                    <label for="cpf">CPF</label>
                    <input type="password" name="cpf" placeholder="CPF">
                </div>

                <button class="btn-login">Enviar</button>
        </div>
        </form>
    </div>

</body>

</html>


