#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int count = 0;

    for(int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        if(A % K == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
