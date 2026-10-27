
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        if(R1 > R2 + R3 || R2 > R1 + R3 || R3 > R1 + R2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
