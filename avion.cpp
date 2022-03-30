#include <iostream>

using namespace std;

int main(){

    bool f=false;
    string str;
    for(int i(1); i<6; i++){
        cin >> str;
        if(str.find("FBI")!=-1){
            cout <<i<<" ";
            f=true;
        }
    }
    if(!f) cout << "HE GOT AWAY!";

    return 0;
}