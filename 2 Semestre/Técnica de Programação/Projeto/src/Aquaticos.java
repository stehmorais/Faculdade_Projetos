public class Aquaticos implements Veiculos {
    
    private int motores;

    private int tamanho;

    public aquaticos(int tamanho, int motores) {
        this.tamanho = tamanho;
        this.motores = motores;
    }

     @Override
    public void mover() {
        System.out.print("Situação: ");   
    }

    @Override
    public void abastecer() {
        System.out.print("Situação: ");
    
    }

    public int getTamanho() {
        return tamanho;
    }

    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }

    public int getMotores() {
        return motores;
    }

    public void setMotores(int botes) {
        this.motores = motores;
    }


}