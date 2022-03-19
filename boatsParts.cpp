#include <iostream>
#include <map>

using namespace std;


int main(){

    int a,b,j(0),n;
    cin >> a>> b;
    map<string,int> elements;
    bool boo=false;
    while (b--)
    {
        j++;
        string str;
        cin >> str;
        elements.insert({str,j});
        //cout <<elements.size() <<" " << j<<endl;;
        if(elements.size()==a && boo==false) {
           n=j;
           boo=true;
        }

    }
    if(elements.size()<a) cout << "paradox avoided";
    else cout << n << endl;
    

    return 0;
}


