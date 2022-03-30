#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n(0),i;
    cin >>n;
    vector<int> knot,learn;
    int j(n-1);
    while (n--)
    {
        cin >>i;
        knot.push_back(i);
    }
    while(j--){
        cin >>i;
        learn.push_back(i);
    }
    for(int i : knot){
        bool r=false;
        for(int j: learn){
            if(i==j){
                r=true;
                break;
            }
        }
        if(!r){
            cout<<i<<endl;
            break;
        }

    }

    

    return 0;
}