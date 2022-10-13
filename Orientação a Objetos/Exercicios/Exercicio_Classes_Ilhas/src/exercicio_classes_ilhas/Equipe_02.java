/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_classes_ilhas;

/**
 *
 * @author CarlosGuilhermeHackb
 */
public class Equipe_02 {
    private int velocidade = 0;
    private String ingredientes[] = new String[10];
    
    
    public void setVelocidade(int velocidade){
        this.velocidade = velocidade;
    }
    
    public int getVelocidade(){
        return this.velocidade;
    }
    
    public boolean setIngredientes(String nome){
        int index = lastIndex();
        
    }
    
    private int lastIndex(){
        int index = 0;
        for(int i = 0; i <= 10; i++){
            if(this.ingredientes[i] == null){
                index = i;
                break;
            }
        }
        
        return index;
    }
    
    
    
    
}
