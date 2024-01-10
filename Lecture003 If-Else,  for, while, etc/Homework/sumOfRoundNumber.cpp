#include <iostream>
#include <vector>
using namespace std;

vector<int> getRoundNumbers(int n) {
    int currPowOfTen = 1;
    vector<int> ans;

    while (n > 0) {
        int dig = n % 10;
        n /= 10;
        if (dig > 0) {
            ans.push_back(dig * currPowOfTen);
        }
        currPowOfTen *= 10;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> result = getRoundNumbers(n);

        cout << result.size() << endl;

        for (int i : result) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
