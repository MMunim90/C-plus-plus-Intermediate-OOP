#include<bits/stdc++.h>
using namespace std;

class Mother
{
    public:
        Mother(){};
        void sayHi(){
            cout << "From Mother";
        }
};

class Daughter: public Mother
{
    public:
        Daughter(){};
};

int main()
{
    Daughter d;
    d.sayHi();
    return 0;
}