/**
 * practiceProblems
 */

import java.util.Scanner;
public class practiceProblems {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);
        problem1(ch);
        sc.close();
    }
    static void problem1(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            System.out.println("Alphabet");
        }
        else if(ch>='0' && ch<='9'){
            System.out.println("Digit");
        }
        else{
            System.out.println("Special Character");
        }
    }
}