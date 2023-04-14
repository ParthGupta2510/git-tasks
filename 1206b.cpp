#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    long long cnt = 0;
    int neg = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        if (a > 0)
        {
            cnt += a - 1;
        }
        else if (a < 0)
        {
            cnt += -1 - a;
            neg++;
        }
        else
            zeros++;
    }
    if (!(zeros) && (neg % 2 == 1))
        cnt += 2;
    else
        cnt += zeros;
    cout << cnt << endl;
}
