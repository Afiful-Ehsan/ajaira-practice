#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << *p << endl;

    *p = 20;

    cout << a << endl;

    return 0;
}
