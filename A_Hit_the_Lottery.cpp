#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;
    int n;
    cin >> n;

    vector<int> coins = {1 , 5, 10, 20, 100};

    int coinsCount = 0;

    for (int i = coins.size() - 1; i >= 0; i--)
    {
        int d = n / coins[i];
        coinsCount += d;
        n -= d * coins[i];
    }


    cout << coinsCount << endl;
    return 0;
}