import java.util.Scanner;

public class increasingNumberTrianglePattern {
    public static void pattern13(int n){
        int count = 1;
        for(int i = 1; i<=n; i++){
            for(int j=1;j<=i;j++){
                System.out.print(count);
                count++;
            }
            System.out.println();
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            pattern13(n);
        }

        sc.close();
    }
}
