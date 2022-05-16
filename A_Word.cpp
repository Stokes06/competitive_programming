#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    string s;
    cin >> s;

    int lower = 0;
    for (char c : s)
    {
        if (islower(c))
            ++lower;
    }

    if (lower >= (s.size() / 2) + s.size() % 2)
    {

        for (char c : s)
        {
            cout << (char)tolower(c);
        }
        return 0;
    }
    for (char c : s)
    {
        cout << (char)toupper(c);
    }

    return 0;
}