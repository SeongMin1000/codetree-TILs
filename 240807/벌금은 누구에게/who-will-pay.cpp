#include <iostream>
using namespace std;

int stu[101];
int ans=-1;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0; i<m; i++){
        int num;
        cin>>num;

        stu[num]++;
        if(stu[num]==k){
            ans=num;
            break;
        }
    }

    cout<<ans;
    return 0;
}