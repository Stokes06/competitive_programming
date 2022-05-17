#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    set<int> s;
    for(int i = 1; i <= 4 ; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << 4 - s.size() << endl;
    return 0;
}