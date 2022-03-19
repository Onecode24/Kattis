#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long a,benef,money(100);
    vector<long long> values;
    cin >> a;
    while(a--){
        cin >> benef;
        values.push_back(benef);
    }
    long long last=values[0];
    for(int i(1); i<values.size(); i++){
        if(values[i]>=last){
            a=money/last;
            if(a>100000) a=100000;
            money+=a*(values[i]-last);
        }           
        last=values[i];
    }
    cout <<money;

    return 0;
}