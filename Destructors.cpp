#include<bits/stdc++.h>
using namespace std;

class myClass
{
public:
    myClass();
    ~myClass();
};

myClass::myClass()
{
    cout << "Constructor" << endl;
}

myClass::~myClass()
{
    cout << "Destructor" << endl;
}


int main()
{
    myClass obj;
    return 0;
}