#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int,int>> flux;
    vector<int> res;
    int n,ti,i;
    cin>>n;
    while(n--){
        cin>>ti>>i;
        flux.push_back({i,ti});
    }
    int exe(0);
    n=flux[0].second;n=0;
    sort(flux.begin(),flux.end());
    for(auto i=0; i<flux.size();i++){
        if(flux[i].second<n){
           exe+=(n-flux[i].second-1);
           n+=flux[i].second+1;
        }else{
            n++;
        }
        // if(flux[i].second>n){
        //     res.push_back(flux[i].second+1);
        //     n=flux[i].second;
        // }else{
        //     res.push_back(n+1);
        // }
        
    }
    // for(int i(0); i<res.size(); i++){
    //     cout <<res[i]<<" ";
    // }
    cout<<exe;

    return 0;
}