#include <iostream>
using namespace std;

int arr[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int r,c;
        cin>>r>>c;        
        arr[r][c]=1;

        int count=0;

        for(int t=0; t<4; t++){
            int nx=c+dx[t];
            int ny=r+dy[t];
            if(arr[ny][nx]==1) count++;
        }            
          
        if(count==3) cout<<1<<"\n";
        else cout<<0<<"\n";
    }

    
    return 0;
}