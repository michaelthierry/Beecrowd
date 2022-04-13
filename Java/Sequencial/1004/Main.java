import java.util.Scanner;

/**
 * Problema 1004 - Produdo simples
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int valorA, valorB, produto;

        valorA = leitor.nextInt();
        valorB = leitor.nextInt();

        leitor.close();

        produto = valorA * valorB;

        System.out.println("PROD = " + produto);
    }
}
