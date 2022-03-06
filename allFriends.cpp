#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

void checkAllFriend(multimap<int,int> friends,int n);

int main(){
    multimap<int,int> friends;
    int n,m;
    cin >> n >> m;
    for(int i(0); i<m; i++){
        int a,b;
        cin >>a>>b;
        friends.insert({a,b});
    }
    auto itr=friends.begin();
    while(itr!=friends.end()){
        if(itr->first>n){
            checkAllFriend(friends,itr->first);
        }else if(itr->second>n){
            checkAllFriend(friends,itr->second);

        }

        itr++;
    }



    return 0;
}

void checkAllFriend(multimap<int,int> friends,int n){

}