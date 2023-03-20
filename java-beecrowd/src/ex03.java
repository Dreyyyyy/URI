import java.io.IOException;
import java.util.Scanner;

public class ex03 {

    public static void main(String[] args) throws IOException {
        int A = 0, B = 0, SOMA = 0;
        Scanner input = new Scanner(System.in);

        A = input.nextInt();
        B = input.nextInt();
        SOMA = A + B;

        System.out.println("SOMA = " + SOMA);
    }
}
