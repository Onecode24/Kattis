#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main(){
    vector<string> output;
     
    int n(0),m(9);
    while(cin >> n){
        long p(1);
       bool val=true;
        while(p<n){
            p*=7.5;
            val=!val;
        }
        if(!val){
            //cout << "Stan wins."<<endl;
            output.push_back("Stan wins.");
        }else{
            //cout <<"Ollie wins."<<endl;
            output.push_back("Ollie wins.");

        }
    }
    for(int i(0); i<output.size(); i++){
        cout << output[i]<<endl;
    }

    return 0;
}