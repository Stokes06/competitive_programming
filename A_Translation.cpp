#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    string first, second;
    cin >> first >> second;

    reverse(first.begin(), first.end());

    if(first == second){
        puts("YES");
    } else {

        puts("NO");
    }

    return 0;
}