#include <bits/stdc++.h>
using namespace std;

void changeValue(int *p)
{
    *p = 50;
}

int main()
{
    int a = 10;

    cout << a << endl;

    changeValue(&a);

    cout << a << endl;

    return 0;
}
