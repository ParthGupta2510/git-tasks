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
        ;
        int n, k;
        cin >> n;
        int index = -1;
        vector<int> v(n + 2);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        v[0] = v[1];
        v[n + 1] = v[n];
        int m = *max_element(v.begin(), v.end());
        for (int i = 1; i <= n; i++)
        {
            if ((v[i] == m) && ((v[i - 1] < m) || (v[i + 1] < m)))
            {
                index = i;
                break;
            }
        }
        cout << index << endl;
    }
}