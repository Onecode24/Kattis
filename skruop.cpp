#include <iostream>

using namespace std;

int main(){

    int n,skru(7);
    string str;
    cin >>n;
    getline(cin,str);
    for (size_t i = 0; i < n; i++)
    {
        getline(cin,str);
        if(str=="Skru op!" && skru<10) skru++;
        if(str=="Skru ned!" && skru>0) skru--;
    }
    
    cout << skru;
    return 0;
}