#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream MyFile1("test.txt");

    if(MyFile1.is_open()){
        MyFile1 << "This is awesome! \n";
    }
    else{
        cout << "Something went wrong";
    }

    MyFile1.close();


    string line;

    ifstream MyFile("text.txt");
    while (getline(MyFile, line)){
        cout << line << '\n';
    }
    
    MyFile.close();

    return 0;
}