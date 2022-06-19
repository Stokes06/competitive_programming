#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{

    fast_io;
    int n;
    cin >> n;

    vector<pair<int, int>> teams(n);
    for (int i = 0; i < n; i++)
    {

        int home, guest;
        cin >> home >> guest;
        teams[i] = {home, guest};
    }

    int hostWithGuest = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (teams[i].first == teams[j].second)
            {
                hostWithGuest++;
            }

            if(teams[j].first == teams[i].second){
                hostWithGuest++;
            }
        }
    }

    cout << hostWithGuest << endl;
    return 0;
}