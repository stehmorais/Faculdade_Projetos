/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aulapolimorfismo;

/**
 *
 * @author aluno.si
 */
public class Animal {
    // Atributos
    private int tamanho;
    private String nome;
    
    public Animal(int tamanho, String nome){
        this.tamanho = tamanho;
        this.nome = nome;
    }
    
    public void Mover(){
        System.out.println("Estou em movimento");
    }
    
    public String getNome(){
        return nome;
    }
    
    public int getTamanho(){
        return tamanho;
    }
}
