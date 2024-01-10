import java.util.Scanner;

public class symmetricButterflyPattern {
    public static void pattern20(int n){
        //initial space
        int iniS=2*n-2;
        for(int i=1;i<=2*n-1;i++){
            int stars = i;
            if(i>n) stars=2*n-i;
            //stars
            for(int j=1;j<=stars;j++){
                System.out.print("*");
            }
            //spaces
            for(int space=1;space<=iniS;space++){
                System.out.print(" ");
            }
            //stars
            for(int j=1;j<=stars;j++){
                System.out.print("*");
            }
            System.out.println();
            if(i<n) iniS-=2;
            else iniS+=2;
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++){
            int n = sc.nextInt();
            pattern20(n);
        }
        sc.close();
    }
}
