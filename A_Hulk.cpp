#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int n;
    cin >> n;
    vector<string> feels = {
        "I hate",
        "I love"
    };
    cout << feels[0] << " ";
    for(int i = 1; i < n; i++){
        cout << "that " << feels[i%2] << " ";
    }
    cout << "it";
    return 0;
}