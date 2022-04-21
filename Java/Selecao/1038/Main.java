import java.util.Locale;
import java.util.Scanner;

/**
 * Problema 1038 - Lanche
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        int codigo, quantidade;
        double valor;
        Scanner leitor = new Scanner(System.in);

        codigo = leitor.nextInt();
        quantidade = leitor.nextInt();

        leitor.close();

        switch(codigo){
            case 1:
                valor = quantidade * 4.00;
                System.out.printf("Total: R$ %.2f\n", valor);
                break;
            case 2:
                valor = quantidade * 4.50;
                System.out.printf("Total: R$ %.2f\n", valor);
                break;
            case 3:
                valor = quantidade * 5.00;
                System.out.printf("Total: R$ %.2f\n", valor);
                break;
            case 4:
                valor = quantidade * 2.00;
                System.out.printf("Total: R$ %.2f\n", valor);
                break;
            case 5:
                valor = quantidade * 1.50;
                System.out.printf("Total: R$ %.2f\n", valor);
                break;
            default:
                break;
        }
    }
}
