#include <iostream>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int dir=0;
int x=0, y=0;
int total=0;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        char dir;
        cin>>dir>>t;

        if(dir=='N') dir=3;
        else if(dir=='W') dir=2;
        else if(dir=='S') dir=1;
        else dir=0;

        for(int j=1; j<=t; j++){
            x+=dx[dir];
            y+=dy[dir];
            total++;
            if(x==0 && y==0){
                cout<<total;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}