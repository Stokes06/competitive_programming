#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    int answer = 0;
    int current = 0;
    while (n--)
    {
        int out, in;
        cin >> out >> in;

        current -= out;
        current += in;

        answer = max(answer, current);
    }

    cout << answer;

    return 0;
}