#include <iostream>
#include <string>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int dir=3;
int x=0, y=0;
int total=0;

int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='L'){
            dir=(dir+3)%4;
            total++;
        }
        else if(s[i]=='R'){
            dir=(dir+1)%4;
            total++;
        }
        else{
            x+=dx[dir];
            y+=dy[dir];
            total++;
        }
        if(x==0 && y==0){
            cout<<total;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}