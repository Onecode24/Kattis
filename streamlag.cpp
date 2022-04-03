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
    int retard(1),exep(0);
    sort(flux.begin(),flux.end());
    int j(0);
    for(auto i : flux){
        if(i.second<=retard){
            retard++;
            //continue;
        }else{
            exep+=i.second-retard;
            retard=i.second+1;
        }
    }
    cout<<exep<<endl;
    return 0;
}