/*-------------------Solved---------------------*/

#include <iostream>

using namespace std;

int main(){
    string str,val;
    cin>> str;
    val+=str[0];
    for(int i(1); i<str.length(); i++){
        if(str[i]=='-') val+=str[i+1];
    }
    cout <<val;
    return 0;
}