// bk − a
// ______
// k −1


#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fast_io;

    int price, n, banana;
    cin >> price >> n >> banana;

    int totalPrice = 0;
    for(int i = 1; i <= banana ; ++i){
        totalPrice += i * price;
    }

    cout << max(0, totalPrice - n) << endl;

    return 0;
}