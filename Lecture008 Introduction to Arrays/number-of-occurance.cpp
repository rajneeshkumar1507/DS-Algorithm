#include<bits/stdc++.h>
using namespace std;

vector<int> firstOccurrence(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return {first};
}

vector<int> lastOccurrence(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return {last};
}

vector<int> count(vector<int>& arr, int x) {
    vector<int> first = firstOccurrence(arr, x);
    vector<int> last = lastOccurrence(arr, x);
    if (first[0] == -1 || last[0] == -1) {
        return {0};
    }
    int result = last[0] - first[0] + 1;
    return {result};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> ans = count(arr, x);
        for (auto it : ans) {
            cout << it << endl;
        }
    }
    return 0;
}
