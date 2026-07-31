#include<bits/stdc++.h>
using namespace std;

class myClass
{
private:
    string name;
public:
    myClass(string nm){
        setName(nm);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
};


int main()
{
    myClass ob1("munim");
    myClass ob2("mr. bean");

    cout << ob1.getName() << endl;
    cout << ob2.getName() << endl;
    return 0;
}