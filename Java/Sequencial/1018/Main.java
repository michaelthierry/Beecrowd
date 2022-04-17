import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int saldo, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

        saldo = leitor.nextInt();

        leitor.close();

        System.out.println(saldo);

        notas100 = saldo / 100;
        saldo %= 100;
        notas50 = saldo / 50;
        saldo %= 50;
        notas20 = saldo / 20;
        saldo %= 20;
        notas10 = saldo / 10;
        saldo %= 10;
        notas5 = saldo / 5;
        saldo %= 5;
        notas2 = saldo / 2;
        saldo %= 2;
        notas1 = saldo / 1;

        System.out.println(notas100 + " nota(s) de R$ 100,00");
        System.out.println(notas50 + " nota(s) de R$ 50,00");
        System.out.println(notas20 + " nota(s) de R$ 20,00");
        System.out.println(notas10 + " nota(s) de R$ 10,00");
        System.out.println(notas5 + " nota(s) de R$ 5,00");
        System.out.println(notas2 + " nota(s) de R$ 2,00");
        System.out.println(notas1 + " nota(s) de R$ 1,00");
    }
}
