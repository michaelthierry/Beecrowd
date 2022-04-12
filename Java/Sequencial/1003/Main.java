import java.util.Scanner;

/**
 * Problema 1003 - Soma Simples
 */
public class Main {
    public static void main(String[] args) {
        
        int valorA, valorB, soma;
        Scanner leitor = new Scanner(System.in);

        valorA = leitor.nextInt();
        valorB = leitor.nextInt();

        leitor.close();

        soma = valorA + valorB;

        System.out.printf("SOMA = "+soma);

    }
}
