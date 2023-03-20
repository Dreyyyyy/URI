import java.util.Scanner;

public class ex04 {
    public static void main(String[] args) {
        int A = 0, B = 0, PROD = 0;
        Scanner input = new Scanner(System.in);

        A = input.nextInt();
        B = input.nextInt();
        PROD = A * B;

        System.out.println("PROD = " + PROD);
    }
}
