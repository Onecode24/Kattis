/*---------------------SOLVED------------------------*/

#include <iostream>

using namespace std;

int main(){
    int n, print(1),status(0),j(0);
    cin >>n ;
    for(int i(0); i<n; i++){

    }
    while(status<n){
        if(print<n/2){
            print*=2;j++;
        }else if(status<n){
            status+=print;
            j++;
        }
    }
    cout << j;
}