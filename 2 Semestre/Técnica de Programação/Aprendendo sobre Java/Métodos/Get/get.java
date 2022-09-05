// Instanciando um objeto na classe para deixar de ser abstrata
    Carro carro1 = new Carro();
    int portasLocal;
       
    // recuperando a quantidade de portas do veiculo para a variavel local
    portasLocal = carro1.getPortas(); // valendo 4
    postasLocal = portasLocal + 1; // valendo 5
    System.out.println("portasLocal: "+ portasLocal);
    
		// pois so alterei o valor da variavel int portasLocal
    System.out.println("Portas do carro:" + carro1.getPortas());
