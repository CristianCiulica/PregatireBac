#include <iostream>
using namespace std;
int a[100][100], i, j, s, n, m;
int main(){
    cin >> n >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i][j] % 2 == 0)
                s += a[i][j];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
    cout << endl;
    }
    return 0;
}
