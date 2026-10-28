#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int X;
        cin >> X;

        int discount = X * 10 / 100;

        if(discount > 100)
        {
            cout << discount << endl;
        }
        else
        {
            cout << 100 << endl;
        }
    }

    return 0;
}
