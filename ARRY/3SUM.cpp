#include <vector>
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    cin >> n;

    vector<int> v(n);
    cout<<"k =  ";
    int k;
    cin >> k;

    for (auto &i : v)
    {
        cin >> i;
    }
    bool ans = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int curr = v[low] + v[high] + v[i];
            if (curr == k)
                ans = true;

            if (curr < k)
                low++;
            else
                high--;
        }
    }
    if (ans == false)
    {
        cout << "not found" << endl;
    }
    else
        cout << "found" << endl;

    return 0;
}