#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    bool ok = (n > 2 && ((n & 1) == 0));

    cout << (ok ? "YES" : "NO") << endl;
}