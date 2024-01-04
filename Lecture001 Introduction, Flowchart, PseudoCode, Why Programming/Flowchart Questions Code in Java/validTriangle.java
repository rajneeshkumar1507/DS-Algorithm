import java.util.Scanner;

public class validTriangle {
    public static boolean validTriangle(int side1, int side2, int side3) {
        return (side1 + side2 > side3) && 
        (side1 + side3 > side2) && 
        (side2 + side3 > side1) && 
        (side1 != 0) && (side2 != 0) && (side3 != 0);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();

        for (int i = 0; i < testCases; i++) {
            int side1 = sc.nextInt();
            int side2 = sc.nextInt();
            int side3 = sc.nextInt();
            if (validTriangle(side1, side2, side3)) {
                System.out.println("Valid Triangle");
            } else {
                System.out.println("Not a valid triangle");
            }
        }

        sc.close();
    }
}
