#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;

    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
    }

    pair<int, int> min = {105, 0};
    pair<int, int> max = {0, 0};

    for (int i = 0; i < n; ++i)
    {
        int x = v[i];
        if (x <= min.first)
        {
            min = {x, i};
        }
        if (x > max.first)
        {
            max = {x, i};
        }
    }

    int minPos = min.second;
    int maxPos = max.second;

    cerr << minPos << " " << maxPos << endl;
    int moveToEnd = n - 1 - minPos;
    int moveToStart = maxPos;

    int answer = moveToEnd + moveToStart;

    if (minPos < maxPos)
        answer -= 1;
    cout << answer << endl;

    return 0;
}