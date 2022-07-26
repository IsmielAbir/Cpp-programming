#include <iostream>

using namespace std;

int main()
{
    int n, m,flag=0,c,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    char s;
    cout<<"Do you want to search (Y/N): ";
    cin>>s;
    while(s=='Y'){
        
         cout<<"Enter your searching element: ";
    cin>>m;
    for(i=0;i<n;i++){
        if(a[i]==m){
            c=i;
            flag=1;
        }
    }
    if(flag==0)
    cout<<"Not found try again";
    else
    cout<<c<<endl;
    
    cout<<"Do you want to continue searching (Y/N): ";
    cin>>s;

        
    }
    
    
   
    return 0;
}