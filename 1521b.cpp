
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {

        int n = 0, m = 0, k = 0, x = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << n - 1 << '\n';
        for (int i = 0; i < n - 1; i++)
        {
            cout << i + 1 << " " << n << " ";
            if (i % 2 == 0)
                cout << 1000000007 << " ";
            else
            {
                cout << 1000000009 << " ";
            }
            int mi = min(v[i], v[n - 1]);
            v[n - 1] = mi;
            cout << v[n - 1] << '\n';
        }
    }
}