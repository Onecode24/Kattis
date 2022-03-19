#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getMax(vector<int> tab);

int main(){

    int nbrMachines,nbrRoues,a,i(1);
    cin >> nbrMachines;
    while (nbrMachines--)
    {
        cin >>nbrRoues;
        vector<int> periode;
        while (nbrRoues--)
        {
            cin >> a;
            periode.push_back(a);
        }

        i=getMax(periode);

        while(true){
            int s(0);
            for(auto j : periode){
                if(i%j==0) s++;
            }
            if(s==3){
                cout << i<<endl;
                break;
            }
            if(i>pow(10,9)){
                cout <<"More than a billion."<<endl;
                break;
            }
            i++;
        }     
    }
    

    return 0;
}

int getMax(vector<int> tab){
    int n(0);
    for(auto i : tab){
        if(i>n){
            n=i;
        }
    }
    return n;
}