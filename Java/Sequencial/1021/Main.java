import java.util.Locale;
import java.util.Scanner;

/**
 * Problema 1021 - Notas e Moedas
 */
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner leitor = new Scanner(System.in);
        double saldo;
        int notas, notas100, notas50, notas20, notas10, notas5, notas2;
        int moedas, moedas1, moedas50, moedas25, moedas10, moedas05, moedas01;

        saldo = leitor.nextDouble();

        leitor.close();

        notas = (int)saldo;
        moedas =(int)((saldo - notas) * 100);

        notas100 = notas / 100;
        notas %= 100;
        notas50 = notas / 50;
        notas %= 50;
        notas20 = notas / 20;
        notas %= 20;
        notas10 = notas / 10;
        notas %= 10;
        notas5 = notas / 5;
        notas %= 5;
        notas2 = notas / 2;
        notas %= 2;

        moedas1 = notas;
        moedas50 = moedas / 50;
        moedas %= 50;
        moedas25 = moedas / 25;
        moedas %= 25;
        moedas10 = moedas / 10;
        moedas %= 10;
        moedas05 = moedas / 5;
        moedas %= 5;
        moedas01 = moedas / 1;

        System.out.println("NOTAS:");
        System.out.println(notas100 + " nota(s) de R$ 100.00");
        System.out.println(notas50 + " nota(s) de R$ 50.00");
        System.out.println(notas20 + " nota(s) de R$ 20.00");
        System.out.println(notas10 + " nota(s) de R$ 10.00");
        System.out.println(notas5 + " nota(s) de R$ 5.00");
        System.out.println(notas2 + " nota(s) de R$ 2.00");

        System.out.println("MOEDAS:");
        System.out.println(moedas1 + " moeda(s) de R$ 1.00");
        System.out.println(moedas50 + " moeda(s) de R$ 0.50");
        System.out.println(moedas25 + " moeda(s) de R$ 0.25");
        System.out.println(moedas10 + " moeda(s) de R$ 0.10");
        System.out.println(moedas05 + " moeda(s) de R$ 0.05");
        System.out.println(moedas01 + " moeda(s) de R$ 0.01");
    }
}
