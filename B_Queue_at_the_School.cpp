#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n, t;
    cin >> n >> t;

    string q;
    cin >> q;

    while (t--)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i > 0 && q[i] == 'G' && q[i - 1] == 'B')
            {
                swap(q[i], q[i - 1]);
                i--;
            }
        }
    }

    cout << q << endl;
    return 0;
}