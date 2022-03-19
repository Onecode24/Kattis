#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool check(long long n,int i);

int main(){

    long long n(0),i(1),j,m;
    cin>>n;
    // bool loop=true;
    // while(loop){
    //     j=pow(i,9);
    //     if(j<0) break;
    //     if(j<=n){
    //         if(n%j==0){
    //             m=i;
    //         }
    //     }else if(j>n) break;
    //     i++;
    // }
    // cout << m << endl;
    // return 0;
    j=sqrt(sqrt(n));
    for(int i(j); i>0; i--){
        if(check(n,i)){
            cout << i<<endl;
            break;
        }
    }
}

bool check(long long n,int i){

    for(int j(0); j<9; j++){
        if(n%i!=0) return false;
        n/=i;
    }
    return true;

}
