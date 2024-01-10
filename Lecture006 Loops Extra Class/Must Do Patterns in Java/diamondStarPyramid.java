import java.util.Scanner;
public class diamondStarPyramid{
    public static void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            for (int space = 0; space < n - i - 1; space++) {
                System.out.print(" ");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }

            // This loop is not necessary.
            for (int space = 0; space < n - i - 1; space++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            for (int space = 0; space < i; space++) {
                System.out.print(" ");
            }
            for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                System.out.print("*");
            }
            // This loop is not necessary.
            for (int space = 0; space < i; space++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            pattern7(n);
            pattern8(n);
        }
        scanner.close();
    }
}