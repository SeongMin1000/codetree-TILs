#include <iostream>
using namespace std;

int arr[1003];

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_count=0;
    int count=0;
    int temp=1;
    for(int j=0; j<n; j++){
      if(j==0 || arr[j]!=arr[j-1]){
        count=temp;
        temp=0;
      }
      temp++;

      if(max_count<count) max_count=count; 
    }
   

    cout<<max_count;

    return 0;
}