import java.util.Scanner;
import java.lang.Math;
import java.util.Locale;

/*
 * Problema 1002 - Area do circulo
 */
public class Main {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        final double PI = 3.14159;
        double areaDoCirculo = 0.0;
        Scanner leitor = new Scanner(System.in);
        
        areaDoCirculo = leitor.nextDouble();

        areaDoCirculo = PI *  Math.pow(areaDoCirculo, 2.00);

        leitor.close();

        System.out.printf("A=%.4f\n", areaDoCirculo);

    }
    
}
