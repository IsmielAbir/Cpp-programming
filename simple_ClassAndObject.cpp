#include<iostream>
using namespace std;

class Student{
    public:
    char name[100];
    int ID;

};

int main(){

    Student ab;
    cin>>ab.name>>ab.ID;
    cout<<ab.name<<" "<<ab.ID;

}