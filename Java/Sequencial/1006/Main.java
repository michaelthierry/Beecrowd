import java.util.Locale;
import java.util.Scanner;

/**
 * Problema - 1006 Media 2
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        float valorA, valorB, valorC;
        double media;

        valorA = leitor.nextFloat();
        valorB = leitor.nextFloat();
        valorC = leitor.nextFloat();

        leitor.close();

        media = (valorA * 2) + (valorB * 3) + (valorC * 5);
        media = media / 10.0;

        System.out.printf("MEDIA = %.1f\n", media);
    }
    
}
