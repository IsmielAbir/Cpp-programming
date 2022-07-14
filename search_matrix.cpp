#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Your Row and Column: ";
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Your 2D Matrix is\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int s, c=0;
    cout<<"Enter an element that you want to search: ";
    cin>>s;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==s){
            cout<<i<<" "<<j<<endl;
            c=1;
            }
        }
    }
    if(c==1)
    cout<<"Element found in the matrix";
    else
    cout<<"Element not found in the matrix";



}