#include <iostream>
#include <algorithm>
using namespace std;

int arr[1003];
int ans=1;
int max_count=0;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i==0 || arr[i]<=arr[i-1]){
            ans=0;
        }
        ans++;
        max_count=max(max_count, ans);
    }
    cout<<max_count;
    return 0;
}