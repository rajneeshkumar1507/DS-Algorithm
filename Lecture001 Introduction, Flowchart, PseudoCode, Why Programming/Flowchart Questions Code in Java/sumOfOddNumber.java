import java.util.Scanner;

public class sumOfOddNumber {
    public static int sumOfOddNum(int num) {
        int sum = 0;
        for (int i = 1; i <= num; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        for (int i = 0; i < testCases; i++) {
            int num = sc.nextInt();
            int answer = sumOfOddNum(num);
            System.out.println("Sum of all odd numbers from 1 to " + num + " is: " + answer);
        }

        sc.close();
    }
}
