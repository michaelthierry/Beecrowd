import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1009 - Salario com bônus
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner  leitor = new Scanner(System.in);
        String nome;
        double salario, vendas;

        nome = leitor.nextLine();
        salario = leitor.nextDouble();
        vendas = leitor.nextDouble();
        
        leitor.close();
    
        vendas = (vendas / 100.0) * 15.0;
        salario = salario + vendas;

        System.out.printf("Total = R$ %.2f", salario);

    }
    
}
