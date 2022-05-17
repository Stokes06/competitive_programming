#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int p;
        cin >> p;
        sum += p;
    }
    cout << sum / n << endl;

    return 0;
}