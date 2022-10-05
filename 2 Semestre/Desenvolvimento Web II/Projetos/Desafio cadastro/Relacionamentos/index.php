<?php 
require_once 'classes/Participante'; 
require_once 'classes/Caracteristicas'; 
class Pessoa 
{ 
	private $nome; 
	private $cpf; 
	private $endereco; 
	 
	public function __construct($nome, $cpf, $endereco) 
	{ 
	    if (is_string($nome)) { 
	        $this->nome = $nome; 
	    } 
	    if (is_numeric($cpf)) { 
	        $this->cpf = $cpf; 
	    } 
	    if (is_string($endereco)) { 
	        $this->endereco = $endereco;
	    } 
	} 

    public function __destruct() 
	{ 
	    print "Destruido o objeto de: {$this->nome}, com cpf: {$this->cpf}, cujo endereço é: {$this->endereco}<br>\n"; 
	}

	public function getNome() 
	{ 
	    return $this->nome; 
	} 
	public function getCpf() 
	{ 
	    return $this->cpf; 
	} 
	public function getEndereco() 
	{ 
	    return $this->endereco; 
	}
    public function setNome($nome) 
	{ 
	   $this->nome = $nome;
	}
    public function setCpf($cpf) 
	{ 
	    $this->cpf = $cpf;
	}  
    public function setEndereco($endereco) 
	{ 
        $this->endereco = $endereco;
	}    
}

class SalaVirtual 
{ 
	private $nome; 
	private $quantidade_membros; 
	 
	public function __construct($nome, $quantidade_membros) 
	{ 
	    if (is_string($nome)) { 
	        $this->nome = $nome; 
	    } 
	    if (is_numeric($quantidade_membros) AND $quantidade_membros > 0) { 
	        $this->quantidade_membros = $quantidade_membros; 
	    }
	} 
    public function __destruct() 
	{ 
	    print "Destruido o objeto de: {$this->nome}, com quantidade de membros: {$this->quantidade_membros}<br>\n"; 
	}
	public function getNome() 
	{ 
	    return $this->nome; 
	} 
	public function getQuantidade_membros() 
	{ 
	    return $this->quantidade_membros; 
	} 
    public function setNome($nome) 
	{ 
	   $this->nome = $nome;
	}
    public function setQuantidade_membros($quantidade) 
	{ 
	    $this->quantidade_membros = $quantidade;
	} 
}

// Criança pessoas

$p1 = new Pessoa('Maria', 65735485645, "Rua diamante, 126 - Araras"); 
$p2 = new Pessoa('Gabriel', 98745634287, "Rua ruby, 876 - Limeira"); 
$p3 = new Pessoa('Marcos', 76485754337, "Rua ametista, 342 - Araras"); 
$p4 = new Pessoa('Carol', 98302865386, "Rua cripto, 253 - Leme"); 
$p5 = new Pessoa('Luiza', 09267184352, "Rua esmeralda, 912 - Campinas"); 
$p6 = new Pessoa('Jonas', 09267184352, "Rua esmeralda, 912 - Campinas"); 
$p7 = new Pessoa('Jose', 09267184352, "Rua esmeralda, 912 - Campinas"); 

$sv1 = new SalaVirtual('Flutter',50);
$sv2 = new SalaVirtual('Carreira',40);
$sv3 = new SalaVirtual('Mindset',30);


// Adicionando caracteristicas
$p1->addCaracteristicas( '19h', '22h', 'Marcos'); // Marcos professor que esta dando aula para Maria   
$p2->addCaracteristicas( '15h', '17h', 'Jonas');  // Jonas professor que esta dando aula para Gabriel  
$p3->addCaracteristicas( '19h', '22h', 'Carol'); // Carol esta ajudando o professor Marcos a dar aula
$p4->addCaracteristicas( '19h', '22h', 'Marcos'); //Carol e Marcos estao se ajudando dando aula juntos					
$p5->addCaracteristicas( '19h', '22h', 'Marcos'); // Marcos professor que esta dando aula para a Luiza 
$p6->addCaracteristicas('15h', '17h', 'Jose'); // Jose esta ajudando o professor Jonas a dar aula
$p7->addCaracteristicas('15h', '17h', 'Jonas'); // Jonas e Jose estao se ajudando dando aula juntos


// Depois pegar dados do participante
// para especificar os perfis e entender sem os comentários


for($i=1;$i<=5;$i++){

print 'Nome da '.$i.'ª pessoa: '.${'p'.$i}->getNome().'<br>'.PHP_EOL; 
print 'CPF da '.$i.'ª pessoa: '.${'p'.$i}->getCpf().'<br>'.PHP_EOL; 
print 'Endereco da '.$i.'ª pessoa: '.${'p'.$i}->getEndereco().'<br><br><br>'.PHP_EOL; 

}

print '<br>Sala 3 trocada de: Historia, para: Geografia <br><br>';

$sv3->setNome('Geografia');
for($i=1;$i<=3;$i++){

	print 'Nome da '.$i.'ª sala: '.${'sv'.$i}->getNome().'<br>'.PHP_EOL; 
	print 'Quantidade de pessoas da '.$i.'ª sala: '.${'sv'.$i}->getQuantidade_membros().'<br><br><br>'.PHP_EOL; 
	
}

