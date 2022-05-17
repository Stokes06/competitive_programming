#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    ll n;
    cin >> n;

    ll sum = n / 2 - (n%2) * n;

    cout << sum << endl;

    return 0;
}