import java.util.Locale;
import java.util.Scanner;

/**
 * Problema 1005 - Media 1 
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        float valorA, valorB;
        double media;

        valorA = leitor.nextFloat();
        valorB = leitor.nextFloat();

        leitor.close();

        media = (valorA * 3.5) + (valorB * 7.5);
        media = media / 11.0;

        System.out.printf("MEDIA = %.5f\n", media);
    }
    
}
