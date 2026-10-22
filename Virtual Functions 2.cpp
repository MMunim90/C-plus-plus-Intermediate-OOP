#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow Meow" << endl;
    }
};

int main() {
    Animal a; 
    Animal *ptr; 
    Dog myDog;
    Cat myCat;

    a.sound();
    
    ptr = &myDog;
    ptr->sound();
    
    ptr = &myCat;
    ptr->sound();

    return 0;
}