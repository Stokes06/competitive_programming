#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;
    int n;
    cin >> n;
    string games;
    cin >> games;

    int d = 0;
    for (char c : games)
    {
        if (c == 'D')
        {
            d++;
        }
        else
        {
            d--;
        }
    }

    if (d > 0)
    {
        puts("Danik");
    }
    else if (d == 0)
    {
        puts("Friendship");
    }
    else
    {
        puts("Anton");
    }

    return 0;
}