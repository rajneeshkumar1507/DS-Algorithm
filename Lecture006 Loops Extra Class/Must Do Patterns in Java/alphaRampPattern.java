import java.util.Scanner;

public class alphaRampPattern {
    public static void pattern16(int n){
        for(int i=1;i<=n;i++){
            char ch = (char) ('A' + i - 1);
            for(int j=1;j<=i;j++){
                System.out.print(ch);
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n = sc.nextInt();
            pattern16(n);
        }
        sc.close();
    }
}
