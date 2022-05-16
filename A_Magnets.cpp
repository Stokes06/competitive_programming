#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    int groups = 1;

    string s;
    cin >> s;

    int prev;
    prev = s[1];

    for(int i = 1; i < n ; i++){

        cin >> s;
        if(s[0] == prev){
            ++groups;
        }
        prev = s[1];
    }

    cout << groups << endl;
    return 0;
}