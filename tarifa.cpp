/*---------------------------------Solved----------------------------------*/

#include <iostream>

using namespace std;

int main(){
    int x,n,sup(0),m;
    cin >> x >> n;
    while(n--){
        cin >>m;
        sup+=(x-m);
    }
    cout << sup+x;
    return 0;
}