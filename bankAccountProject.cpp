#include<iostream>
using namespace std;


class BankAccount{
    public:
    string account_holder;
    string address;
    int age;
    int account_number;
    protected: 
    int balance;
    private:
    string password;

    BankAccount(string account_holder, string address, int age, string password){
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        this->password=password;
        this->account_number=rand()%1000000000;
        this->balance=0;
        cout<<"Your account no is "<<this->account_number<<endl;
    }

    int show_balance(string password){
        if(this->password==password)
        return this->balance;
        else
        return -1;
    }

};

BankAccount* create_account(){
    string account_holder, password, address;
    int age;
    cout<<"Create Account "<<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount=new BankAccount(account_holder, address, age, password);
    return myAccount;
}

int main(){
    BankAccount *myAccount = create_account();
    if(myAccount->show_balance("abc")==-1)
    cout<<"Password did not match";
    else
    cout<<"Your bank balance is "<<myAccount->show_balance("abc")<<endl;

    return 0;
}