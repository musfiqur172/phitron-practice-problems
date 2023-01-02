#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, flag = 0;
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
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    // for (int i = 0; i < b.size(); i++)
    // {
    //     for (int j = 0; j < a.size(); j++)
    //     {
    //         if (b[i] == a[j])
    //         {
    //             flag = 1;
    //             break;
    //         }
    //         flag = 0;
    //     }
    //     if (!flag)
    //         cout << b[i] << " ";
    // }

    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (b[i] == a[j])
            {
                b[i] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == 0)
        {
            for (int j = i; j < b.size() - 1; j++)
            {
                b[j] = b[j + 1];
            }
            b.pop_back();
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}