import java.util.Scanner;

public class perfectPower {
    public static boolean perfectPower(int num) {
        if (num <= 0) return false;
        while (num > 1) {
            if (num % 2 != 0) {
                return false;
            }
            num = num / 2;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        for (int i = 0; i < testCases; i++) {
            int num = sc.nextInt();
            if (perfectPower(num)) {
                System.out.println(num + " is a perfect power of 2!");
            } else {
                System.out.println(num + " is not a perfect power of 2!");
            }
        }

        sc.close();
    }
}
