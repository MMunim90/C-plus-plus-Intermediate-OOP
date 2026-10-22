#include<bits/stdc++.h>
using namespace std;

class MyClass {
    public:
        MyClass(){
            regVar = 0;
        }

    private:
        int regVar;

    friend void someFunc(MyClass &obj);
};

void someFunc(MyClass &obj){
    obj.regVar = 42;
    obj.regVar = 43;
    cout << obj.regVar;
}

int main()
{
    MyClass obj;
    someFunc(obj);
    return 0;
}