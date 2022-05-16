#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    string s;
    cin >> s;
    char prev = s[0];

    int answer = 0;
    for (int i = 1; i < n; ++i)
    {
        char c = s[i];
     
        cerr << c ;
        if (prev == c)
        {
            ++answer;
        }
        prev = c;
    }

    cout << answer << endl;
    return 0;
}