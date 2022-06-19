#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)


int main()
{
    fast_io;

    int n;
    cin >> n;
    int count = 0;
    int answer  = 0;
    while(n--){
        int x;
        cin >> x;
        if(count + x < 0){
            ++answer;
        }
        count = max(0, count + x);
    }

    cout << answer << endl;




    return 0;
}

