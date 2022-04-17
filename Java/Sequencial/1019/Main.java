import java.util.Scanner;
/**
 * Problema 1019 - Conversão de Tempo
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int segundosTotais, horas, minutos, segundos;

        segundosTotais = leitor.nextInt();

        leitor.close();

        horas = segundosTotais / 3600;
        minutos = (segundosTotais - (3600 * horas)) / 60;
        segundos = (segundosTotais - (3600 * horas) - (minutos * 60));

        System.out.printf("%d:%d:%d\n", horas, minutos, segundos);
    }
}
