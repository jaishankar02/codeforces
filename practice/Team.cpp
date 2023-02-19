#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==1&&b==1){
            count++;
        }
        else if(a==1&&c==1){
            count++;
        }
        else if(b==1&&c==1){
            count++;
        }
    }
    cout<<count<<endl;
}