#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int ans=0;
int temp=0;

int main() {
    int n,t;
    cin>>n>>t;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]>t){
            temp++;
        }
        else{
            temp=0;
        }
        ans=max(ans, temp);
    }
    cout<<ans;
    return 0;
}