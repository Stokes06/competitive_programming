#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

bool isLuckDigit(int digit)
{
    return digit == 4 || digit == 7;
}

bool isLucky(ll n)
{

    while (n)
    {
        int digit = n % 10;
        if (!isLuckDigit(digit))
        {
            return false;
            n /= 10;
        }
        return true;
    }
}
int main()
{
    fast_io;
    ll n;
    cin >> n;

    int countLucky = 0;
    while(n){

        int digit = n % 10;

        if(isLuckDigit(digit)){
            countLucky++;
        }
        n /= 10;
    }

    cout << (isLucky(countLucky) ? "YES" : "NO") << endl;

    return 0;
}