#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;
    for(int i(0); i<str.length(); i++){
        if((str[i]==':' || str[i]==';') && str[i+1]==')'){
            cout<<i<<endl;
        }else if((str[i]==':' || str[i]==';') && str[i+1]=='-' && str[i+2]==')'){
            cout<<i<<endl;
        }
    }
    return 0;
}