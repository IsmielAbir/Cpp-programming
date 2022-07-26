#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Your given array is: ";
    printArray(a, n);


    int pos, val;
    cout<<"Enter Your position and value you want to enter in the array: ";
    cin>>pos>>val;

    if(pos<0 || pos>n)
    cout<<"Invalid, please try again";
    else{
        for(int i=n-1; i>pos; i--){
            a[i+1]=a[i];

        }
        a[pos]=val;
    }
    printArray(a, n+1);

    return 0;

}