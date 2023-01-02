#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, prod = 1;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2)
            prod *= a[i];
    }

    cout << prod << "\n";

    return 0;
}