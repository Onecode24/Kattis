#include <iostream>
#include  <vector>

using namespace std;


int recu(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return recu(n-1)+2;
}


int main(){

    int n;
    while(cin>>n){
        cout << recu(n)<<endl;
    }
    return 0;
}