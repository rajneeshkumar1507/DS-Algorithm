import java.util.Scanner;
class rectangleStartPattern {
   static void pattern1(int N)
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            System.out.print("* ");
        }
        System.out.println();
    }
}
public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            pattern1(n);
        }
        scanner.close();
    }
}