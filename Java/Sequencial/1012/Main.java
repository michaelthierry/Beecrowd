import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1012 - Area
 */

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        final double PI = 3.14159;
        double valorA, valorB, valorC;
        double areaDoTriangulo, areaDoCirculo, areaDoTrapezio, areaDoQuadrado, areaDoRetangulo;

        valorA = leitor.nextDouble();
        valorB = leitor.nextDouble();
        valorC = leitor.nextDouble();

        leitor.close();

        areaDoTriangulo = (valorA * valorC) / 2.0;
        areaDoCirculo = PI * (valorC * valorC);
        areaDoTrapezio = ((valorA + valorB) * valorC) / 2.0;
        areaDoQuadrado = valorB * valorB;
        areaDoRetangulo = valorA * valorB;

        System.out.printf("TRIANGULO: %.3f\n", areaDoTriangulo);
        System.out.printf("CIRCULO: %.3f\n", areaDoCirculo);
        System.out.printf("TRAPEZIO: %.3f\n", areaDoTrapezio);
        System.out.printf("QUADRADO: %.3f\n", areaDoQuadrado);
        System.out.printf("RETANGULO: %.3f\n", areaDoRetangulo);

    }
}
