#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    string first;
    string second;
    cin >> first >> second;

    for(int i = 0; i < first.size(); ++i){
        cout << (first[i] != second[i]);
    }

    return 0;
}