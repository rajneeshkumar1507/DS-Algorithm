import java.util.Scanner;

public class hollowRectangle {
    public static void pattern21(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || j==n-1 || i==n-1) System.out.print("*");
                else System.out.print(" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n = sc.nextInt();
            pattern21(n);
        }
        sc.close();
    }   
}
