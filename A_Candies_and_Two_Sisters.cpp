#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

void test_case()
{
    int n;
    cin >> n;
    int answer = n/2 - ((n&1) == 0);
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