/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication5;

import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class JavaApplication5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        
       int x= 1;
       double d = 2.0;
       String s = "Teste";
       
        System.out.println("Digite um valor inteiro");
        x = sc.nextInt();
        
        System.out.println("Digite um valor double");
        d = sc.nextDouble();
        
        System.out.println("Escreva");
        s = sc.next();
       
        System.out.println("Valor de x " + x);
        System.out.println("Valor de d: " + d);
        System.out.println(s);
        
    }
    
}
