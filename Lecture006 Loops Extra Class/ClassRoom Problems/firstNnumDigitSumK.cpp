#include <iostream>
using namespace std;


/*
    Print first N number that have digit sum equal to K.

    N = 3, K = 10
    19, 28, 37 will the answer
*/
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void printNumbersWithDigitSum(int N, int k) {
    int count = 0;
    int num = 1;

    while (count < N) {
        if (digitSum(num) == k) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N, k;
        cin >> N >> k;
        cout << "The first " << N << " numbers with digit sum equal to " << k << " are: "<<endl;
        printNumbersWithDigitSum(N, k);
    }
    return 0;
}
