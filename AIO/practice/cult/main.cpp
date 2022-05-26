#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cultin.txt", "r", stdin);
    freopen("cultout.txt", "w", stdout);
    int n = 0;
    cin >> n;

    int doubles = 0;
    while (n % 2 == 0)
    {
        doubles++;
        n /= 2;
    }

    cout << n << " " << doubles << flush;
}