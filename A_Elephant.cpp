#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;


    int n;
    cin >> n;

    cout << (n / 5) + (n % 5 != 0) << endl;

    return 0;
}