#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n, travelTime;
    cin >> n;
    cin >> travelTime;
    int availableTime = 4 * 60 - travelTime;

    int answer = 0;
    int i = 1;
    cerr << availableTime << endl;
    while (availableTime > 0 && i <= n)
    {
        availableTime -= 5 * i;
        if(availableTime >= 0){
            answer++;
        }
        i++;
    }


    cout << answer << endl;
    return 0;
}