#include "MyClass.h"
#include "MyClass2.h"
#include <iostream>
using namespace std;

MyClass::MyClass() {
}

void MyClass::myPrint() {
  cout <<"Munim"<<endl;
}

void MyClass2::myPrint() const {
cout <<"rahim"<<endl;
}

int main(){
    MyClass obj;
    obj.myPrint();

    MyClass *ptr = &obj;
    ptr->myPrint();

    const MyClass2 obj2;
    obj2.myPrint();
}