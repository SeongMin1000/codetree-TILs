#include <iostream>
#include <string>
using namespace std;

char arr[1001][1001];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int dir;

int main() {
    int n,k;
    cin>>n;
    for(int i=0; i<n; i++){
        string mirror;
        cin>>mirror;

        for(int j=0; j<mirror.length(); j++){
            arr[i][j]=mirror[j];
        }
    }
    cin>>k;

    int startR=0;
    int startC=0;
    if((k-1)/n==0){
        dir=1;
        startR=0;
        startC=k-1;
    } 
    else if((k-1)/n==1){
        dir=2;
        startR=(k-1)%n;
        startC=n-1;
    } 
    else if((k-1)/n==2){
        dir=3;
        startR=n-1;
        startC=(n-1)-(k-1)%n;
    } 
    else{
        dir=0;
        startR=(n-1)-(k-1)%n;
        startC=0;
    } 

    bool inging=true;
    int count=1;
    if(arr[startR][startC]=='/'){
        dir=3-dir;
    }
    else{
        dir=(5-dir)%4;
    }

    while(inging){
        int nx=startC+dx[dir];
        int ny=startR+dy[dir];

        if(0<=nx && nx<n && 0<=ny && ny<n){
            if(arr[ny][nx]=='/'){
                dir=3-dir;
            }
            else{
                dir=(5-dir)%4;
            }
            count++;
        }
        else{
            cout<<count;
            inging=false;
            break;
        }
        startC=nx;
        startR=ny;
    }

    return 0;
}