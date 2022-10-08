/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aulapolimorfismo;

/**
 *
 * @author aluno.si
 */
public class Sapo extends Animal{
    
    public Sapo(int tamanho, String nome){
        // Superclasse
        super(tamanho,nome);
    }
    
    @Override
    public void Mover(){
        System.out.println("Estou pulando");
        System.out.println("Nome: " + getNome() + " o sapo.");
        System.out.println("---------------------------------");
    }
    
    @Override
    public String getNome(){
        return super.getNome();
    }
        
}
