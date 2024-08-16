#include <iostream>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int arr[51][51];

int main() {
    int n,t;
    cin>>n>>t;
    int r,c;
    string d;
    cin>>r>>c>>d;

    int dir=0;
    if(d=="U"){
        dir=3;
    }
    else if(d=="D"){
        dir=1;
    }
    else if(d=="R"){
        dir=0;
    }
    else{
        dir=2;
    }

    while(t--){
        int x=c+dx[dir];
        int y=r+dy[dir];
        if(1>x || x>=n || 1>y || y>=n){
            dir=(dir+2)%4;
        }
        else{
            r=y;
            c=x;
        }
    }
    cout<<r<<" "<<c;
    return 0;
}