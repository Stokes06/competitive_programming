#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)


int main()
{
    fast_io;

    string winMsg = "I become the guy.";
    string looseMsg = "Oh, my keyboard!";

    int levels;
    cin >> levels;
    set<int> s;
    int p,q;
    cin >> p;
    while(p--){
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        s.insert(x);
    }


    bool win = s.size() == levels;
    cout << (win ? winMsg : looseMsg) << endl;
    return 0;
}