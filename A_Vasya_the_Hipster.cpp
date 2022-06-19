#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int a, b;
    cin >> a >> b;

    if(a > b){
        swap(a, b);
    }
    

    cout << a << " ";
    cout << ((b - a) / 2);

    return 0;
}