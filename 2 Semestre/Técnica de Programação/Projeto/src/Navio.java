public class Navio extends Aquaticos{

    public Navio(int tamanho, int motores) {
        super(tamanho, motores);
    }

    @Override
    public void mover() {
        super.mover();
        System.out.println("Movendo navio");
    }
    
    @Override
    public void abastecer() {
        super.abastecer();
        System.out.println("Abastecendo navio");
    }
    
    @Override
    public int getTamanho() {
        return super.getTamanho();
    }

    @Override
    public void setTamanho(int tamanho) {
        super.setTamanho(tamanho);
    }

    @Override
    public int getMotores() {
        return super.getMotores();
    }

    @Override
    public void setMotores(int motores) {
        super.setMotores(motores);
    }
}
