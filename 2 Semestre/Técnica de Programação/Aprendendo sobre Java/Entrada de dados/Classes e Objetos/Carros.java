public static void main(String[] args){
        
    // Instanciando um objeto na classe para deixar de ser abstrata 
    Carro carro1 = new Carro();
    
    System.out.println("Características do carro 1");
    carro1.imprimir();
    
    Carro carro2 = new Carro();
    System.out.println("==========================");
    System.out.println("Características do carro 2");
    carro2.imprimir();
        
    
}
