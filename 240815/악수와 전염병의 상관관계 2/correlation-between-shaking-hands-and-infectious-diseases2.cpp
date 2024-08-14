#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

bool check[101];
int many[101];
vector<pair<int, pair<int, int>>> pp;

int main() {
    int n,k,p,T;
    cin>>n>>k>>p>>T;
    check[p]=1;
    for(int i=0; i<T; i++){
        int t,x,y;
        cin>>t>>x>>y;

        pp.push_back(make_pair(t, make_pair(x, y)));
    }
    sort(pp.begin(), pp.end());

    for(auto pr : pp){
        int first=pr.second.first;
        int second=pr.second.second;
        if(check[first]==1 && check[second]==1){
            if(many[second]<k){
                many[second]++;
            }
            if(many[first]<k){
                many[first]++;
            }
        }
        else if(check[first]==1){
            if(many[first]<k){
                many[first]++;
                check[second]=1;
            }
        }
        else if(check[second]==1){
            if(many[second]<k){
                many[second]++;
                check[first]=1;
            }
        }
        
    }

    for(int i=1; i<=n; i++){
        cout<<check[i];
    }
    return 0;
}