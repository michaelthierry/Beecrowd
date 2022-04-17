import java.util.Scanner;
/**
 * Problema 1020 - Idade em dias
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int diasTotais, anos, meses, dias;

        diasTotais = leitor.nextInt();

        leitor.close();

        anos = diasTotais / 365;
        meses = (diasTotais - (365 * anos)) / 30;
        dias = (diasTotais - (365 * anos) - (meses * 30));

        System.out.println(anos + " anos(s)");
        System.out.println(meses + " mes(es)");
        System.out.println(dias + " dia(s)");
    }
}
