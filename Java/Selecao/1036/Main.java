import java.util.Locale;
import java.util.Scanner;
import java.lang.Math;
/**
 * Problema 1036 - Formula de Bhaskara
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        double valorA, valorB, valorC, Raiz1, Raiz2, delta;
        Scanner leitor = new Scanner(System.in);

        valorA = leitor.nextDouble();
        valorB = leitor.nextDouble();
        valorC = leitor.nextDouble();

        leitor.close();

        if(valorA == 0){
            System.out.println("Impossivel calcular");

        }else{
            delta = Math.pow(valorB, 2.0) - 4.0 * valorA * valorC;

            if(delta >= 0){
                Raiz1 = ((-valorB + Math.sqrt(delta)) / (2.0 * valorA));
                Raiz2 = ((-valorB - Math.sqrt(delta)) / (2.0 * valorA));

                System.out.printf("R1 = %.5f\n", Raiz1);
                System.out.printf("R2 = %.5f\n", Raiz2);

            }else{
                System.out.println("Impossivel calcular");

            }
        }
    }
}
