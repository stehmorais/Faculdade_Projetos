<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Storage Procedure</title>
</head>
<body>
<?php
// chamada da procedure

// importando arquivo de conexão
    include 'conexao.php';
// estrutura para chamar a procedure
// if (isset($_POST['qtde'])){
// $qtde = $_POST['qtde'];

    $sql = "Select c.*, r.nome as nomerepr from cliente c, representante r where c.idrepresentante = r.id";
    $result = mysqli_query($connect, $sql);

// $result = mysqli_query($connect, "CALL selecionar_produtos('". $qtde ."');");

    print "<h2>Resultados</h2>";        
    print "<br>";
    while($linha = mysqli_fetch_assoc($result)){
        print $linha["id"]. " - " .$linha["nome"] . " - " .$linha["nomerepr"];
        print "<br>";
    }

?>

</body>
</html>
