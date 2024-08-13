#include <iostream>
using namespace std;

int lineA[2000001];
int lineB[2000001];
int timet=1;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int t;
        string d;
        cin>>t>>d;
        
        for(int j=timet; j<timet+t; j++){
            if(d=="L"){
                lineA[j]=lineA[j-1]-1;
            }
            else{
                lineA[j]=lineA[j-1]+1;
            }
        }
        timet+=t;  
    }

    timet=1;
        for(int i=0; i<m; i++){
            int t;
            string d;
            cin>>t>>d;
            
            for(int j=timet; j<timet+t; j++){
                if(d=="L"){
                    lineB[j]=lineB[j-1]-1;
                }
                else{
                    lineB[j]=lineB[j-1]+1;
                }
            }
            timet+=t;  
    }

    int count=0;
    for(int i=0; i<=timet; i++){
        if(lineA[i]==lineB[i] && i!=0){
            if(lineA[i-1]!=lineB[i-1]) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}