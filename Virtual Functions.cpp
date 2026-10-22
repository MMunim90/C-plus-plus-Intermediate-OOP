#include<bits/stdc++.h>
using namespace std;

class Enemy{
    public:
        virtual void attack(){
            cout << "Enemy class" << endl;
        }
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout << "Ninja!" << endl;
        }
};

class Monster: public Enemy{
    public:
        void attack(){
            cout << "Monster!" << endl;
        }
};

int main()
{
    Enemy x;
    Ninja n;
    Monster m;

    x.attack();
    // n.attack();
    // m.attack();

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();
    return 0;
}