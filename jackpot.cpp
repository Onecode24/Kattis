#include <iostream>
#include <vector>
#include <cmath>
#include <map>

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

        long long sum(1);
        
        for (auto j : periode){
            sum*=j;
        }
        if (sum>(pow(10,9)))       
        {
            cout <<"More than a billion."<<endl;
            return 0;
        }else{
            long long t(0);
            for(long long l(sum); l>0; l-=i){
                 int s(0);
                for(auto k : periode){
                    if(l%k==0) s++;
                }
                // if(s==periode.size()){
                //     cout << l<<endl;
                //     break;
                // }
                if(s==periode.size()){
                    t=l;
                }
            }
             cout << t<<endl;


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