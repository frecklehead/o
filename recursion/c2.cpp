#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if (n == 0)
        return 0;

    cout << n << endl;

    return func(n - 1);
}

int main()
{
    int n;
    cin >> n;
    func(n);
}