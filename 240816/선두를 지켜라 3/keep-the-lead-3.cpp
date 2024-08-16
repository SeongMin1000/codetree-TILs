#include <iostream>
using namespace std;

int lineA[1000001];
int lineB[1000001];
int total=1;

int main() {
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        int v,t;
        cin>>v>>t;

        while(t--){
            lineA[total]=lineA[total-1]+v;
            total++;
        }
    }   

    total=1;
    for(int i=0; i<m; i++){
        int v,t;
        cin>>v>>t;

        while(t--){
            lineB[total]=lineB[total-1]+v;
            total++;
        }
    }

    int ans=0;
    int head=0;
    for(int i=0; i<total; i++){
        if(lineA[i]==lineB[i]){
            if(head!=0) {
                ans++;
                head=0;
            }
        }
        else if(lineA[i]>lineB[i]){
            if(head!=1) {
                ans++;
                head=1;
            }
        }
        else{
            if(head!=2) {
                ans++;
                head=2;
            }
        }
    }
    cout<<ans;
    return 0;
}