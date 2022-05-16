#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

int a, b;
cin >> a >> b;
int years = 0;
while( a <= b){
    a *= 3;
    b *= 2;
    ++years;
}
cout << years << endl;
    return 0;
}