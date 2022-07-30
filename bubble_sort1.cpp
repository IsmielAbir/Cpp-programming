#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main (){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"Before sort: ";
    printArray(a, n);


    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                {int temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;}
                flag=1;
            }
           
        }
         if(flag==0)
            break;
    }
    cout<<"After sort: ";
    printArray(a,n);
    return 0;
}