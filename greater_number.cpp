//input a string number from user and make greatest number from input
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
}