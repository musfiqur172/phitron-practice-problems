#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i += 2)
    {
        str[i] = str[i] == 'z' ? 'a' : ++str[i];
    }

    cout << str;

    return 0;
}