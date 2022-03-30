#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;
    int n=str.length();
    for(int i(1); i<n; i++){
        if(str[i]==str[i-1]){
            str.erase(i,1);
            i--;
        }
        n=str.length();
    }
    cout << str;

    return 0;
}