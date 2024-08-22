#include <iostream>
#include <list>
using namespace std;

list<char> breads;

int main() {
    int n,m;
    string bread;
    cin>>n>>m>>bread;

    for(int i=0; i<n; i++){
        breads.push_back(bread[i]);
    }
    auto cur=breads.end();

    for(int i=0; i<m; i++){
        string dir;
        cin>>dir;
        if(dir=="L"){
            if(cur!=breads.begin())
                cur--;
        }
        else if(dir=="R"){
            if(cur!=breads.end())
                cur++;
        }
        else if(dir=="D"){
            if(cur!=breads.end() && breads.size()!=0)
                breads.erase(cur);
        }
        else{
            char w;
            cin>>w;
            breads.insert(cur,w);
        }
    }

    for(auto it=breads.begin(); it!=breads.end(); it++){
        cout<<*it;
    }
    return 0;
}