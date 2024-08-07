#include <iostream>
using namespace std;

int lineA[1000]={};
int lineB[1000]={};
int total=1;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string d;
        int t;
        cin>>d>>t;

        for(int j=total; j<total+t; j++){
           if(d=="L"){
            lineA[j]=lineA[j-1]-1;
           }
           else{
            lineA[j]=lineA[j-1]+1;
           }
        }
        total+=t;
    }

    total=1;
    for(int i=0; i<m; i++){
        string d;
        int t;
        cin>>d>>t;

        for(int j=total; j<total+t; j++){
           if(d=="L"){
            lineB[j]=lineB[j-1]-1;
           }
           else{
            lineB[j]=lineB[j-1]+1;
           }
        }
        total+=t;

    }

    for(int i=1; i<total; i++){
        if(lineA[i]==lineB[i]){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}