#include <bits/stdc++.h>

using namespace std;
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;
    string word;
    cin >> word;

    set<char> letters;

    for (char c : word)
    {
        letters.insert(c);
    }

    if ((letters.size() & 1) == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}