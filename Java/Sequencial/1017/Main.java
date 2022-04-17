import java.util.Locale;
import java.util.Scanner;

/**
 * Problema 1017 - Gasto de Combustivel
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int tempo, velocidade;
        double litros;

        tempo = leitor.nextInt();
        velocidade = leitor.nextInt();

        leitor.close();

        litros = (velocidade * tempo) / 12.0;

        System.out.printf("%.3f\n", litros);
    }
}
