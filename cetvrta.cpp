#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,int> x,y;
    int a,b;

    for(int i(0); i<3; i++){
        cin >> a>>b;
        x[a]++;
        y[b]++;
    }
    for(auto i : x){
        if(i.second%2==1) cout << i.first<<" ";
    }
    for(auto i : y){
        if(i.second%2==1) cout << i.first<<" ";
    }
    return 0;
}