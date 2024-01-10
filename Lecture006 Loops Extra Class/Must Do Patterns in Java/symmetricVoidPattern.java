import java.util.Scanner;

public class symmetricVoidPattern {
    public static void pattern19(int n){
        int InSp = 0;
        for(int i=0;i<n;i++){
            //stars
            for(int j=1;j<=n-i;j++){
                System.out.print("*");
            }
            //spaces
            for(int space = 0; space < InSp; space++){
                System.out.print(" ");
            }
            //stars
                        for(int j=1;j<=n-i;j++){
                System.out.print("*");
            }
            InSp+=2;
            System.out.println();
        }
        InSp = 2 * (n - 1);

    for(int i = 0; i < n; i++){
        // stars
        for(int j = 1; j <= i + 1; j++){
            System.out.print("*");
        }

        // spaces
        for(int space = 0; space < InSp; space++){
            System.out.print(" ");
        }

        // stars
        for(int j = 1; j <= i + 1; j++){
            System.out.print("*");
        }

        InSp -= 2;
        System.out.println();
    }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n = sc.nextInt();
            pattern19(n);
        }
        sc.close();
    }
}
