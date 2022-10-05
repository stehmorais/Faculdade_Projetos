<?php

class Caracteristicas
{
	private $horaEntrada; 
	private $horaSaida;
	private $ajudante; 

    public function __construct($caracteristicas, $perfil, $curso) 
	{ 
            $this->caracteristicas = [];
            $this->horaEntrada = $horaEntrada; 
            $this->horaSaida= $horaSaida; 
            $this->ajudante = $ajudante;  
	} 

    public function getAjudante() 
	{ 
	    return $this->horaSaida; 
	} 
     
	public function getHoraEntrada() 
	{ 
	    return $this->horaEntrada; 
	} 
	 
	public function getHoraSaida() 
	{ 
	    return $this->horaSaida; 
	} 


}
