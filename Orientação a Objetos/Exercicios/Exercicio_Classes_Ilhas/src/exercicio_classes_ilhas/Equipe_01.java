/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_classes_ilhas;

/**
 *
 * @author CarlosGuilhermeHackb
 */
public class Equipe_01 {
    //Atributo
    private int velocidade = 0;
    
    //Métodos
    public void acelerar(){
        this.velocidade += 5;
    }
    
    public void katchau(){
        this.velocidade += 25;
    }
    
    public void acelerarX(int velocidade){
        this.velocidade = velocidade;
    }
    
    public void frear(){
        if(this.velocidade != 0)
            this.velocidade -= 10;
    }
    
    public int getVelocidade(){
        return this.velocidade;
    }
    
    
}
