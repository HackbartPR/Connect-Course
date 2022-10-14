/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package primeiro_projeto;

/**
 *
 * @author CarlosGuilhermeHackb
 */
public class Endereco {
    private String rua;
    private int cep;
    private int numero;
    
    public void setRua(String rua){
        this.rua = rua;
    }
    
    public String getRua(){
        return this.rua;
    }

    public int getCep() {
        return cep;
    }

    public void setCep(int cep) {
        this.cep = cep;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }
    
    
}
