import java.util.Locale;
import java.util.Scanner;

/**
 * Problema 1008 - Salario
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        int numeroDoFuncionario, numeroDeHoras;
        double salario;

        numeroDoFuncionario = leitor.nextInt();
        numeroDeHoras = leitor.nextInt();
        salario = leitor.nextDouble();

        leitor.close();

        salario = salario * numeroDeHoras;

        System.out.println("NUMBER = " + numeroDoFuncionario);
        System.out.printf("SALARY = U$ %.2f\n", salario);
    }
}
