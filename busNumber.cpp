#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check_increment(vector<int> bus,int n){
    // for(int i(n);i<bus.size(); i++){
    //     while(bus[i+1]==bus{})
    // }
    while((bus[n]+1)==bus[n+1]){
        n++;
    }
    return n;
}



int main(){

    int n,a;
    vector<int> bus;
    cin >>n;
    while(n--){
        cin >> a;
        bus.push_back(a);
    }
    sort(bus.begin(),bus.end());
    //cout<<bus[0];
    for(int i(0); i<bus.size(); i++){
        if(i!=0) cout<<" ";
        if(check_increment(bus,i)!=i && check_increment(bus,i)!=i+1){
            cout<<bus[i]<<"-"<<bus[check_increment(bus,i)];
            i=check_increment(bus,i);
        }
        else if(check_increment(bus,i)==i+1){
            cout<<bus[i]<<" "<<bus[i+1];
            i++;
        }else{
            cout <<bus[i];
        }
    }

    return 0;
}
