import java.util.Scanner;

public class ex05 {
    public static void main(String[] args) {
        double A = 0.0, B = 0.0, mean = 0.0;
        Scanner input = new Scanner(System.in);

        A = input.nextDouble();
        B = input.nextDouble();

        mean = (A * 3.5 + B * 7.5) / 11;

        System.out.printf("MEDIA = %.5f\n", mean);
    }
}
