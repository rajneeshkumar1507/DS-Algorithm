#include <bits/stdc++.h>
using namespace std;
int numIdenticalPairs(int nums[], int n)
{
    unordered_map<int, int> countMap;
    int goodPairs = 0;
    for(int i=0;i<n;i++)
    {
        goodPairs += countMap[nums[i]]++;
    }
    return goodPairs;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int ans = numIdenticalPairs(arr, n);
        cout << ans << endl;
    }
    return 0;
}