/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exercicio_classes_ilhas;

/**
 *
 * @author CarlosGuilhermeHackb
 */
public class Exercicio_Classes_Ilhas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Equipe_01 equipe01 = new Equipe_01();
        equipe01.acelerar();
        System.out.println("Equipe 01: " + equipe01.getVelocidade());
        equipe01.acelerar();
        System.out.println("Equipe 01: " + equipe01.getVelocidade());
        equipe01.katchau();
        System.out.println("Equipe 01: " + equipe01.getVelocidade());
        equipe01.frear();
        System.out.println("Equipe 01: "+ equipe01.getVelocidade());
        equipe01.acelerarX(20);
        System.out.println("Equipe 01: " + equipe01.getVelocidade());
        
        Equipe_02 equipe02 = new Equipe_02();
        equipe02.setVelocidade(60);
        System.out.println("Equipe 02: " + equipe02.getVelocidade() );
        
        
    }
    
}
