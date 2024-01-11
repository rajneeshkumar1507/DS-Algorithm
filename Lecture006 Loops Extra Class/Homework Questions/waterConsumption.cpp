#include <iostream>
using namespace std;

bool waterConsumption(int x) {
    int water = 2000;
    if (x <= 0)
        return false;
    if (x >= water) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (waterConsumption(x)) {
            cout << "Yes"<< endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
