#include <bits/stdc++.h>
using namespace std;

int next(int n)
{
    switch (n % 2 == 0)
    {
    case true:
        return n / 2;
    case false:
        return n * 3 + 1;
    }
}

int step(int n)
{
    int steps = 0;
    while (n != 1)
    {
        n = next(n);
        steps++;
    }
    return steps;
}

int main()
{
    freopen("hailin.txt", "r", stdin);
    freopen("hailout.txt", "w", stdout);
    int n = 1;
    cin >> n;
    while (n != 0)
    {
        cout << step(n) << "\n"
             << flush;
        cin >> n;
    }
}