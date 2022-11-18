public class Aereos implements Veiculos {

    private int passageiros;

    private int turbinas;

    public aereos(int passageiros, int turbinas) {
        this.passageiros = passageiros;
        this.turbinas = turbinas;
    }

     @Override
    public void mover() {
        System.out.print("Situação: ");   
    }

    @Override
    public void abastecer() {
        System.out.print("Situação: ");
    }

    public int getTurbinas() {
        return turbinas;
    }

    public void setTurbinas(int turbinas) {
        this.turbinas = turbinas;
    }

    public int getPassageiros() {
        return passageiros;
    }

    public void setPassageiros(int passageiros) {
        this.passageiros = passageiros;
    }

}