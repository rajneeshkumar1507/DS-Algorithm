import java.util.Scanner;

public class maxOfThree {
    public static int maxOfThreeNumber(int num1, int num2, int num3) {
        return Math.max(Math.max(num1, num2), num3);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        for (int i = 0; i < testCases; i++) {
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            int num3 = sc.nextInt();
            int answer = maxOfThreeNumber(num1, num2, num3);
            System.out.println("Maximum number is: " + answer);
        }

        sc.close();
    }
}
