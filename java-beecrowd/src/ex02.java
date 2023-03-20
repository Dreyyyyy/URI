import java.util.Scanner;

public class ex02 {

	public static void main(String[] args) {
		double n = 3.14159, raio = 0.0, area = 0.0;
		Scanner input = new Scanner(System.in);

		raio = input.nextDouble();

		area = n * (raio * raio);

		System.out.printf("A=%.4f", area);
	}

}
