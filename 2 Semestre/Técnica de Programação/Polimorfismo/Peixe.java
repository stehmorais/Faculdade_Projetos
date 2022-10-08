/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aulapolimorfismo;

/**
 *
 * @author aluno.si
 */
public class Peixe extends Animal{
    
    public Peixe(int tamanho, String nome){
        // Superclasse
        super(tamanho,nome);
    }
    
    @Override
    public void Mover(){
        System.out.println("Estou nadando");

    }
    
    @Override
    public String getNome(){
       return super.getNome();
    }
        
}
