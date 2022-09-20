<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Parametros php</title>
    <link href="https://fonts.googleapis.com/css2?family=Open+Sans&display=swap" rel="stylesheet">
    <style>

        *{
            padding: 0px;
            margin: 0px;
            box-sizing: border-box;
        }
        body{
            display: flex;
            align-items: center;
            justify-content: center;
            flex-direction: column;
            font-family: 'Open Sans', sans-serif;
            color: #e8caec; 
            background-color: #201b2c;
        }

        h1{
            margin-top: 100px;
        }

        h3{
            margin: 10px;
        }

   

    </style>
</head>

<body>

    <h1>Cadastro realizado!</h1>
    <h3>Enviando para arquivo txt...</h3>
    

    <?php
    // print_r($_GET);
    // print_r($_POST);

   $nome = $_POST['name'];
   $cpf = $_POST['cpf'];
   
   $arquivo = "cadastro.txt";
   $conteudo = "Nome: $nome | CPF: $cpf\n";

   $arquivoAberto = fopen($arquivo, 'a' );
   fwrite($arquivoAberto, $conteudo);
   fclose($arquivoAberto);


    ?>
   

</body>

</html>