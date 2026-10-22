#include<bits/stdc++.h>
using namespace std;

class Mother
{
    public:
        Mother()
        {
            cout << "Mother constructor" << endl;
        }
        ~Mother()
        {
            cout << "Mother destructor" << endl;
        }
};

class Daughter: public Mother
{
    public:
        Daughter()
        {
            cout << "Daughter constructor" << endl;
        }
        ~Daughter()
        {
            cout << "Daughter destructor" << endl;
        }
};

int main()
{
    Daughter m;
    return 0;
}