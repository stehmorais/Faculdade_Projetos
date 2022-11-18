public class Aviao extends Aereos{

    public Aviao(int passageiros, int turbinas) {
        super(passageiros, turbinas);
    }

     @Override
    public void mover() {
        super.mover();
        System.out.println("Movendo aviao");
    }
    
    @Override
    public void abastecer() {
        super.abastecer();
        System.out.println("Abastecendo aviao");
    }

    @Override
    public int getTurbinas() {
        return super.getTurbinas();
    }

    @Override
    public void setTurbinas(int turbinas) {
        super.setTurbinas(turbinas);
    }

    @Override
    public int getPassageiros() {
        return super.getPassageiros();
    }

    @Override
    public void setPassageiros(int passageiros) {
        super.setPassageiros(passageiros);
    }

}