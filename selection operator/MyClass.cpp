#include "MyClass.h"
#include <iostream>
using namespace std;

MyClass::MyClass() {
}

void MyClass::myPrint() {
  cout <<"Munim"<<endl;
}

int main(){
    MyClass obj;
    obj.myPrint();

    MyClass *ptr = &obj;
    ptr->myPrint();
}