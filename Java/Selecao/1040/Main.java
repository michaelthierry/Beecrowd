import java.util.Locale;
import java.util.Scanner;
/**
 * Problema 1040 - Media 3
 */

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        float nota1, nota2, nota3, nota4, media;
        Scanner leitor = new Scanner(System.in);

        nota1 = leitor.nextFloat();
        nota2 = leitor.nextFloat();
        nota3 = leitor.nextFloat();
        nota4 = leitor.nextFloat();

        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;

        System.out.printf("Media: %.1f\n", media);

        if(media >= 7.0){
            System.out.println("Aluno aprovado.");

        }else if(media < 5.0){
            System.out.println("Aluno reprovado.");

        }else{
            System.out.println("Aluno em exame.");
            Float exame;

            exame = leitor.nextFloat();

            leitor.close();

            System.out.printf("Nota do exame: %.1f\n", exame);

            media = (media + exame) / 2;

            if(media >= 5.0){
                System.out.println("Aluno aprovado.");   

            }else{
                System.out.println("Aluno reprovado.");
                
            }

            System.out.printf("Media final: %.1f\n", media);
        }


    }
    
}
