#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> tab){
    int sum(0);
    for(auto i : tab){
        sum+=i;
    }
}


int main(){

    int n,m;
    vector<int> hotdog,buns;
    for(int i(0); i<2; i++){
        cin>>n;
        while(n--){
            cin>>m;
            if(i%2==0){
                hotdog.push_back(m);
            }else{
                buns.push_back(m);
            }
        }
    }

    for(int i(0); i<hotdog.size(); i++)



    return 0;
}