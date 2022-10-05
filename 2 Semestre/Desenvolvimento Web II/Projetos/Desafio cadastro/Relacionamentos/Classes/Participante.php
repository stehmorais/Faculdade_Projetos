<?php

class Participante
{
    private $caracteristicas;
    private $perfil; 
	private $curso; 

    public function __construct($caracteristicas, $perfil, $curso) 
	{ 
            $this->caracteristicas = [];
            $this->perfil = $perfil; 
            $this->curso = $curso;   
	} 


    
    public function getCaracteristicas() 
	{ 
	    return $this->caracteristicas; 
	} 
     
	public function getPerfil() 
	{ 
	    return $this->perfil; 
	} 
	 
	public function getCurso() 
	{ 
	    return $this->curso; 
	} 


}
