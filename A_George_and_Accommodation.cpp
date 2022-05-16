#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    int answer = 0;
    for (int i = 0; i < n; ++i)
    {
        int occupated, maxPlace;
        cin >> occupated >> maxPlace;
        if (maxPlace - occupated >= 2)
        {
            ++answer;
        }
    }
    cout << answer << endl;
    return 0;
}