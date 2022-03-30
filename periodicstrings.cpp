#include <iostream>

using namespace std;

string doRotate(string str){
    string str1(str);
    for(int i(0); i<str.length(); i++){
        str1[i+1]=str[i];
    }
    str1[0]=str[str.length()-1];
    return str1;
}

bool check_periodic(string str,int n){
    if(n==1){
        for(int i(1); i<str.length(); i++){
            if(str[i]!=str[0]) return false;
        }
        return true;
    }
    string a=str.substr(0,n);
    a=doRotate(a);
    for(int i(n); i<str.length(); i+=n){
        string b=str.substr(i,n);
        if(a!=b) return false;
        a=b;
        a=doRotate(a);
    }
    return true;
}

int main(){

    string str;
    cin >>str;
    int n=str.length();
    for(int i(1); i<=n; i++){
        if(n%i==0 && check_periodic(str,i)){
            cout <<i<<endl;
            return 0;
        }
    }

    return 0;
}