#include<bits/stdc++.h>
using namespace std;

template<class T>
class MyClass{
    public:
        MyClass (T x){
            cout << x << " - not a char" << endl;
        }
};

template< >
class MyClass<char>{
    public:
        MyClass(char x){
            cout << x << " is a char!" << endl;
        }
};

int main()
{
    MyClass<int> obj(42);
    MyClass<double> obj2(5.47);
    MyClass<char> obj3('m');
    return 0;
}