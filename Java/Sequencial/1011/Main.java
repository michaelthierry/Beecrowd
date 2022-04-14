import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1011 - Esfera
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int raio;
        Double volume;
        final double PI = 3.14159;
        
        raio = leitor.nextInt();

        leitor.close();

        volume = (4 / 3.0) * PI * (raio * raio * raio);

        System.out.printf("VOLUME = %.3f\n", volume);
                
    }
}
