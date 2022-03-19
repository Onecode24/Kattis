/*-----------------------Solved---------------------*/

#include <iostream>
#include <sstream>

using namespace std;

int getNumber(string tmp);

int main(){
    string str,tmp;int n(0);
    cin >> str;
    for(int i(0); i<str.length(); i++){
        if(str[i]!=';') tmp+=str[i];
        else if(str[i]==';' || i==str.length()-1){
            n+=getNumber(tmp);
            tmp="";
        }     
    }
    n+=getNumber(tmp);
    cout << n;
    return 0;
}

int getNumber(string tmp){
    bool a=true;
    for(int i(0); i<tmp.size(); i++){
        if(tmp[i]=='-'){
            tmp[i]=' ';
            a=false;
        }
    }
    if(a)return 1;
    else{
        stringstream sstmp(tmp);
        int b,c;
        sstmp >> b>>c;
        return (c-b)+1;
    }
}