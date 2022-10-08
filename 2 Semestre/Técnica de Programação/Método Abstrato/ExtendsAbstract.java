package aulapolimorfismo;

/**
 *
 * @author aluno.si
 */
public class ExtendsAbstract extends minhaClasseAbstrata{

    @Override
    public void texto() {
         System.out.println("Meu texto");
    }

    @Override
    public void texto1() {
        System.out.println("Texto 1");
    }

    @Override
    public int texto2() {
        return 2;
    }
    
}
