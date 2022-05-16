#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n, h;
    cin >> n >> h;

    int bent = 0;
    for (int i = 0; i < n; i++)
    {
        int personH;
        cin >> personH;
        if (personH > h)
            bent++;
    }

    cout << n + bent << endl;
    return 0;
}