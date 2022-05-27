#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("nomin.txt", "r", stdin);
    freopen("nomout.txt", "w", stdout);
    int n = 0;
    cin >> n;
    int dish = 0;
    int current = 0;
    int eaten = 0;
    int satisfied = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> dish;
        eaten += dish;
        if (eaten >= current)
        {
            current = eaten;
            eaten = 0;
            satisfied++;
        }
    }
    cout << satisfied << flush;
}