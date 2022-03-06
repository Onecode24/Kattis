#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> cases;
    int n;
    for(int i(0); i<4; i++){
        vector<int> pop;
        for(int j(0); j<4; j++){
            cin >> n;
            pop.push_back(n);
        }
        cases.push_back(pop);
    }

    return 0;
}