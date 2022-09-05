Carro carro1 = new Carro();
    int portasLocal;
    
    System.out.println("Quantidade de portas do carro:" + carro1.getPortas()); //4
    
// trocando quantidade de portas do carro1
    carro1.setPortas(3);
    System.out.println("Quantidade de portas do carro" + carro1.getPortas()); // 3
    
    Carro carro2 = new Carro();
    
    System.out.println("Quantidade de portas do carro 2:" + carro2.getPortas()); // 4
// pois os objetos carro1 e carro2 são independentes, apenas troquei as portas do carro1
