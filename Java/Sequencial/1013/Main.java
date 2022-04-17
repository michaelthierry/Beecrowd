import java.util.Scanner;
import java.lang.Math;
/**
 * Problema 1013 - O maior
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int valorA, valorB, valorC, primeiroMaior, ultimoMaior;

        valorA = leitor.nextInt();
        valorB = leitor.nextInt();
        valorC = leitor.nextInt();

        leitor.close();

        primeiroMaior = (valorA + valorB + (Math.abs(valorA - valorB))) / 2;
        ultimoMaior = (primeiroMaior + valorC + (Math.abs(primeiroMaior - valorC))) / 2;

        System.out.println(ultimoMaior + " eh o maior");
    }
}
