#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;

    string s;
    getline(cin, s);

    char c = s[0];

    int i = 1;
    int len = s.size();
    map<char, int> freq;
    cerr << s << " | " << len << endl;
    while (i < len - 1)
    {
        c = s[i];
        i++;
        if (c == ' ' || c == ',')
            continue;

        freq[c]++;
        cerr << c << " ";
    }

    cout << freq.size() << endl;
    return 0;
}