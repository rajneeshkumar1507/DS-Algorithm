import java.util.Scanner;

public class numberCrownPattern {
    public static void pattern12(int N) {
        int spaces = 2 * (N - 1);
        for (int i = 1; i <= N; i++) {
            // Numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }

            // Spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Numbers
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }
            System.out.println();
            spaces -= 2;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            pattern12(n);
        }
        scanner.close();
    }
}
