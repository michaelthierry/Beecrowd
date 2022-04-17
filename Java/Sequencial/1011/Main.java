import java.util.Locale;
import java.util.Scanner;
import java.lang.Math;
/**
 * Problema 1011 - Esfera
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int raio;
        double volume;
        final double PI = 3.14159;
        
        raio = leitor.nextInt();

        leitor.close();

        volume = (4.0 / 3.0) * PI * Math.pow((double) raio, 3.0);

        System.out.printf("VOLUME = %.3f\n", volume);
                
    }
}
