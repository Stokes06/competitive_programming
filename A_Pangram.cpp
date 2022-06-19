#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;

    int n;
    cin >> n;
    unordered_set<char> letters;

    while (n--)
    {
        char c;
        cin >> c;
        c = tolower(c);
        letters.insert(c);
    }
    cout << ((letters.size() == 26) ? "YES" : "NO") << endl;
    return 0;
}