/*-------------------------Solved---------------------------*/

#include <iostream>

using namespace std;

int main(){

    int n,i(0); cin >>n;
    string str;
    while(i<n){
        cin >> str;
        if(i%2==0){
            cout << str<< endl;
        }
        i++;
    }


    return 0;
}