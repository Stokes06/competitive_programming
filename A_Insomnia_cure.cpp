#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<bool> v(d + 1, false); // false means not hurt

    for (int i = k; i <= d; i += k)
    {
        v[i] = true;
    }
    for (int i = l; i <= d; i += l)
    {
        v[i] = true;
    }
    for (int i = m; i <= d; i += m)
    {
        v[i] = true;
    }
    for (int i = n; i <= d; i += n)
    {
        v[i] = true;
    }

    int count = 0;
    for (int i = 1; i <= d; i++)
    {
        if (v[i])
            count++;
    }
    cout << count << endl;
    return 0;
}