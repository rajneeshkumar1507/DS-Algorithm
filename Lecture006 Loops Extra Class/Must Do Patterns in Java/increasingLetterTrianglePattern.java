import java.util.Scanner;

public class increasingLetterTrianglePattern {
    public static void pattern14(int n){
        for(int i=1;i<=n;i++){
            for(char ch = 'A';ch<='A'+i-1;ch++){
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
            pattern14(n);
        }
        sc.close();
    }
}
