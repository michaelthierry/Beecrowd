import java.util.Scanner;
/**
 * Problema 1007 - Diferença
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int valorA, valorB, valorC, valorD, diferenca;
        
        valorA = leitor.nextInt();
        valorB = leitor.nextInt();
        valorC = leitor.nextInt();
        valorD = leitor.nextInt();

        leitor.close();

        diferenca = (valorA * valorB) - (valorC * valorD);

        System.out.println("DIFERENCA = " + diferenca);
    }
}
