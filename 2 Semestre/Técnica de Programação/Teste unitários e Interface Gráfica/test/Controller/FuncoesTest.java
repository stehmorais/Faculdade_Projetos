/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/UnitTests/JUnit4TestClass.java to edit this template
 */
package Controller;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author aluno.si
 */
public class FuncoesTest {
    
    public FuncoesTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of somar method, of class Funcoes.
     */
    @Test
    public void testSomar() {
        System.out.println("somar");
        int x = 0;
        int y = 0;
        Funcoes instance = new Funcoes();
        int expResult = 0;
        int result = instance.somar(x, y);
        assertEquals(expResult, result);
    }
    
}
