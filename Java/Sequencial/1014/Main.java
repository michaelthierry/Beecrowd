import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1014 - Consumo
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int distancia;
        double combustivel, consumo;

        distancia = leitor.nextInt();
        combustivel = leitor.nextDouble();

        leitor.close();

        consumo = distancia / combustivel;
        
        System.out.printf("%.3f km/l\n", consumo);
    }
}