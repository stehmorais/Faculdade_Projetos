<?php
// COOKIES 

setcookie('user', 'Ester', time()+3600);
setcookie('email', 'exemploemail@gmail.com', time()+3600);  // valido por 1hora 
setcookie('ultima_pesquisa', 'tenis nike', time()+3600);

echo $_COOKIE['ultima_pesquisa'];

?>