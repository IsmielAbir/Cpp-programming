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


    int pos;
    cout<<"Enter Your position and value you want to enter in the array: ";
    cin>>pos;

    if(pos==n-1)n--;//for last index

    else{//for fast or middle any index
        for(int i=pos+1; i<n;i++){
            a[i-1]=a[i];
        }
        n--;
    }
    printArray(a, n);

    return 0;

}