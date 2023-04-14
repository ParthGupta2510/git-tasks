#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    int rem = n % 10, on = n;
    int i = 1;
    while ((rem != 0) && (rem != k))
    {
        n = n + on;
        rem = n % 10;
        i++;
    }
    cout << i;
}