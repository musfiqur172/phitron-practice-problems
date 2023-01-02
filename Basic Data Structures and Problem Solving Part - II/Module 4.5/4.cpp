#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        for (int j = 0; j < a.size(); j++)
        {
            if (b[i] == a[j])
                cout << a[j] << " ";
        }
    }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = 0; j < b.size(); j++)
    //     {
    //         if (a[i] == b[j])
    //             cout << a[i] << " ";
    //     }
    // }

    return 0;
}