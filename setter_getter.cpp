#include <iostream>
using namespace std;

class Exam{
    private:
    int x,pass;
    public:
    Exam(int p){
        pass=p;
    }
    void setter(int a, int p){
        if(pass==p)
        x=a;
        else
        cout<<"Password didn't match"<<endl;
    }
    int getter(int p){
        if(pass==p)
        return x;
        else{
            cout<<"Password didn't match"<<endl;
            return -1;
        }
    }
};

int main()
{
    Exam a(12134);
    a.setter(1500, 1214);
    cout<<a.getter(1214)<<endl;

    return 0;
}