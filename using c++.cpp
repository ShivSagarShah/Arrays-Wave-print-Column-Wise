#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int i = 0;
    for (int j = 0; j < m; j++)
    {
        if (j % 2 == 0)
        {
            while (i < n)
            {
                cout << a[i][j] << ", ";
                i++;
            }
            i--;
        }
        else
        {
            while (i >= 0)
            {
                cout << a[i][j] << ", ";
                i--;
            }
            i++;
        }
    }
    cout << "END";
    return 0;
}
