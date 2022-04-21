import java.util.Scanner;
/**
 * Problema 1035 - Teste de Seleção 1
 */
public class Main{
    public static void main(String[] args) {
        int valorA, valorB, valorC, valorD;
        Scanner leitor = new Scanner(System.in);

        valorA = leitor.nextInt();
        valorB = leitor.nextInt();
        valorC = leitor.nextInt();
        valorD = leitor.nextInt();

        leitor.close();

        if(valorB > valorC){
            if(valorD > valorA){
                if((valorC + valorD) > (valorA + valorB)){
                    if((valorC > 0) && (valorD > 0)){
                        if((valorA % 2) == 0){
                            System.out.println("Valores aceitos");
                        }else{
                            System.out.println("Valores nao aceitos");
                        }
                    }else{
                        System.out.println("Valores nao aceitos");
                    }
                }else{
                    System.out.println("Valores nao aceitos");
                }        
            }else{
                System.out.println("Valores nao aceitos");
            }   
        }else{
            System.out.println("Valores nao aceitos");
        }  
    }
}