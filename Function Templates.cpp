#include<bits/stdc++.h>
using namespace std;

template <class T>
T sum(T a, T b){
    return a + b;
}

int main()
{
    int x = 7, y = 15;
    cout << sum(x, y) << endl;

    int xx = 7.15, yy = 15.54;
    cout << sum(xx, yy) << endl;
    return 0;
}