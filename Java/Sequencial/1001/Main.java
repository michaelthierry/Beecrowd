import java.util.Scanner;

/**
 * Problema 1001 - Extremanente Básico
 */
public class Main {
    public static void main(String[] args) {
        
        int primeiroValor, segundoValor, valorX;
        Scanner leitor = new Scanner(System.in);

        primeiroValor = leitor.nextInt();
        segundoValor = leitor.nextInt();
        
        leitor.close();

        valorX = primeiroValor + segundoValor;

        System.out.println("X = " + valorX);
        
        

    }
    
}
