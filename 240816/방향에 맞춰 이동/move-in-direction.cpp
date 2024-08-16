#include <iostream>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int x=0;
int y=0;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string dir;
        int dis;
        cin>>dir>>dis;
        
        if(dir=="W"){
            x+=dis*dx[2];
        }
        else if(dir=="S"){
            y+=dis*dy[1];
        }
        else if(dir=="N"){
            y+=dis*dy[3];
        }
        else if(dir=="E"){
            x+=dis*dx[0];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}