import java.util.Scanner;

public class alphaHillPattern {
    public static void pattern17(int n) {
        for (int i = 0; i < n; i++) {
            // spaces
            for (int space = 0; space < n - i - 1; space++) {
                System.out.print(" ");
            }
            
            // alphabet
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for (int j = 1; j <= 2 * i + 1; j++) {
                System.out.print(ch);
                if (j <= breakpoint) {
                    ch++;
                } else {
                    ch--;
                }
            }

            // spaces
            for (int space = 0; space < n - i - 1; space++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            pattern17(n);
        }
        sc.close();
    }
}
