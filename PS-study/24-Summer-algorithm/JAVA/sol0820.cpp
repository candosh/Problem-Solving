#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int a[1000001] = {0,1};

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; i * j <= n; j++)
        {
            a[i * j] = 1;
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (!a[i])
        {
            cout << i << "\n";
        }
    }
    return 0;
}