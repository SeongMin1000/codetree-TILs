#include <iostream>
#include <algorithm>
using namespace std;

int lineA[2000001];
int lineB[2000001];
int timeA=1;
int timeB=1;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int t;
        string d;
        cin>>t>>d;
        
        for(int j=timeA; j<timeA+t; j++){
            if(d=="L"){
                lineA[j]=lineA[j-1]-1;
            }
            else{
                lineA[j]=lineA[j-1]+1;
            }
        }
        timeA+=t;  
    }

    for(int i=0; i<m; i++){
        int t;
        string d;
        cin>>t>>d;
        
        for(int j=timeB; j<timeB+t; j++){
            if(d=="L"){
                lineB[j]=lineB[j-1]-1;
            }
            else{
                lineB[j]=lineB[j-1]+1;
            }
        }
        timeB+=t;  
    }

    if(timeA<timeB){
        for(int i=timeA; i<timeB; i++){
            lineA[i]=lineA[i-1];
        }
    }
    else if(timeA>timeB){
        for(int i=timeB; i<timeA; i++){
            lineB[i]=lineB[i-1];
        }
    }

    int maxTime=max(timeA, timeB);
    int count=0;
    for(int i=1; i<maxTime; i++){
        if(lineA[i]==lineB[i] && i!=0){
            if(lineA[i-1]!=lineB[i-1]) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}