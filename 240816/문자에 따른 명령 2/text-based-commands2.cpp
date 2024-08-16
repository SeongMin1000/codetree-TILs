#include <iostream>
#include <string>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int dir=3;
int x=0;
int y=0;

int main() {
    string n;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='L'){
            dir=(dir+3)%4;
        }
        else if(n[i]=='R'){
            dir=(dir+1)%4;
        }
        else{
            x+=dx[dir];
            y+=dy[dir];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}