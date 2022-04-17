import java.util.Locale;
import java.util.Scanner;
import java.lang.Math;

/**
 * Problema 1015 - Distancia entre dois pontos
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        double x1, y1, x2, y2, pontoA, pontoB, distancia;
        Scanner leitor = new Scanner(System.in);
        
        x1 = leitor.nextDouble();
        y1 = leitor.nextDouble();
        x2 = leitor.nextDouble();
        y2 = leitor.nextDouble();

        leitor.close();

        pontoA = (x2 - x1); 
        pontoB = (y2 - y1);
        distancia = Math.sqrt(Math.pow(pontoA, 2) + Math.pow(pontoB, 2));

        System.out.printf("%.4f\n", distancia);
    }
}
