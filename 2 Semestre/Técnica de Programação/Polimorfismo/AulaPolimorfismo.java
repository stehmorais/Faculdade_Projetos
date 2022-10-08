/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aulapolimorfismo;

/**
 *
 * @author aluno.si
 */
public class AulaPolimorfismo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Animal a;
        
        a = new Peixe(50, "Junior");
        a.getNome();
        
        a = new Sapo(20, "George");
        a.Mover();
        
        a = new Ave(10, "Nilton");
        a.Mover();
        
    }
    
}
