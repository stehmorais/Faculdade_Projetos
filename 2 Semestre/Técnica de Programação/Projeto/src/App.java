public class App {
    public static void main(String[] args) throws Exception {
        Terrestres c;
        Aquaticos n;
        Aereos a;
        int at1, bt2;


        c = new Carro(4, 4);
        at1 = c.getRodas();
        bt2 = c.getPortas();

        c.mover();
        c.abastecer();
        System.out.println("Rodas: "+at1);
        System.out.println("Portas: "+bt2);

        System.out.println();

        n = new Navio(200, 6);
        at1 = n.getTamanho();
        bt2 = n.getMotores();

        n.mover();
        n.abastecer();
        System.out.println("Tamanho: "+at1);
        System.out.println("Motores: "+bt2);

        System.out.println();

        a = new Aviao(2, 60);
        at1 = a.getTurbinas();
        bt2 = a.getPassageiros();

        a.mover();
        a.abastecer();
        System.out.println("Turbinas: "+at1);
        System.out.println("Passageiros: "+bt2);
        
    }
}
