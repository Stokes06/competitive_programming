#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

void test_case()
{

    int a, b;
    cin >> a >> b;

    int answer = b - (a % b) - (a % b == 0) * b;
    cout << answer << endl;
}

int main()
{
    fast_io;

    int T;
    cin >> T;
    while (T--)
    {
        test_case();
    }
    return 0;
}