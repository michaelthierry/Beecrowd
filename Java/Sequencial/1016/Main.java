import java.util.Scanner;

/**
 * Problema 1016 - Distancia
 */
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int distancia, minutos;
        
        distancia = leitor.nextInt();

        leitor.close();

        minutos = distancia * 2;

        System.out.println(minutos + " minutos");
    }
}
