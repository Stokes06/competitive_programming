#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int answer = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.find("++") != std::string::npos)
        {
            ++answer;
        }
        else
        {
            --answer;
        }
    }

    cout << answer;
    return 0;
}