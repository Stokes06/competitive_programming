#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)


bool hasDistinctDigits(int n){

    set<int> digits;
    while(n){
        int digit = n % 10;
     
        if(digits.count(digit)){
            return false;
        }
        digits.insert(digit);
        n /= 10;
    }

    return true;
}

int main()
{
    fast_io;

    int n;
    cin >> n;
    int next = n + 1;
    while(true){

        if(hasDistinctDigits(next)){
            cout << next;
            return 0;
        }

        next++;

    }

    return 0;
}