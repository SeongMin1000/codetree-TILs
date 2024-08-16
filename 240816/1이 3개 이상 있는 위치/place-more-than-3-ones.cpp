#include <iostream>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int arr[101][101];

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }


    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int cnt=0;
            for(int k=0; k<4; k++){
                int nx=j+dx[k];
                int ny=i+dy[k];
                if(0<=nx && nx<n && 0<=ny && ny<n){
                    if(arr[nx][ny]==1) cnt++;
                }
            }
            if(cnt>=3) ans++;
        }
    }
    cout<<ans;
    return 0;
}