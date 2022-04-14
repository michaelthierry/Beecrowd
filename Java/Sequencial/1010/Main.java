import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1010 - Calculo Simples
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int codigoPeca1, numeroPeca1;
        int codigoPeca2, numeroPeca2;
        double valorPeca1, valorPeca2, valorTotal;

        codigoPeca1 = leitor.nextInt();
        numeroPeca1 = leitor.nextInt();
        valorPeca1 = leitor.nextDouble();

        codigoPeca2 = leitor.nextInt();
        numeroPeca2 = leitor.nextInt();
        valorPeca2 = leitor.nextDouble();

        leitor.close();

        valorTotal = (numeroPeca1 * valorPeca1) + (numeroPeca2 * valorPeca2);

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    }
}
