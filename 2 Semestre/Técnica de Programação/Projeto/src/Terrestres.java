public class Terrestres implements Veiculos {

    private int portas;

    private int rodas;

    public terrestres(int rodas,int portas){
        this.rodas = rodas;
        this.portas = portas;
    }

     @Override
    public void mover() {
        System.out.print("Situação: ");  
    }

    @Override
    public void abastecer() {
        System.out.print("Situação: ");      
    }

    public int getRodas() {
        return rodas;
    }

    public void setRodas(int rodas) {
        this.rodas = rodas;
    }

    public int getPortas() {
        return portas;
    }

    public void setPortas(int portas) {
        this.portas = portas;
    }
    


}