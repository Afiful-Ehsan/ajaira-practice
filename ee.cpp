#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int c, d;
    cin >> c>> d;

    swap(&c, &d);

    cout << c << " " << d << endl;

    return 0;
}
