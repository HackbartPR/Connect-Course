/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package primeiro_projeto;

import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author CarlosGuilhermeHackb
 */
public class Pessoa {
    private String name;
    private String email;
    private String cpf;
    private Endereco endereco = new Endereco();
    
    public String getName(){
        return this.name;
    }
    
    public void setName(String name){
        this.name = name;
    }
    
    public String getEmail(){
        return this.email;
    }
    
    public void setEmail(String email){
        this.email = email;
    }
    
    public String getCpf(){
        return this.cpf;
    }
    
    public void setCpf(String cpf){
        this.cpf = cpf;
    }
    
    public String getEndereco(){
        return this.endereco.getRua() + " " + this.endereco.getNumero();
    }
    
    public void setEndereco(String rua, int numero){
        this.endereco.setRua(rua);
        this.endereco.setNumero(numero);
    }
}
