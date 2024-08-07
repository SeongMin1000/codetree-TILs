#include <iostream>
using namespace std;

int whereA[1000001];
int whereB[1000001];
int total=1;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int v,t;
        cin>>v>>t;

        for(int j=total; j<total+t; j++){
            whereA[j]=whereA[j-1]+v;
        }
        total+=t;
    }

    total=1;
    for(int i=0; i<m; i++){
        int v,t;
        cin>>v>>t;

        for(int j=total; j<total+t; j++){
            whereB[j]=whereB[j-1]+v;
        }
        total+=t;
    }

    int count=0;
    int head=0;
    for(int i=1; i<total; i++){
        if(whereA[i]-whereB[i]>0){
            if(head==2) count++;
            head=1;
        }
        else if(whereA[i]-whereB[i]<0){
            if(head==1) count++;
            head=2;
        }
    }
    cout<<count;
    return 0;
}