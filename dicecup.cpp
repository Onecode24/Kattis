#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a>>b;
    if(a==b){
        cout <<a+1;
    }else if(a!=b){
        if(a<b){
            int tmp=a;a=b;b=tmp;
        }
        int n=(a-b)+1;
        int j(b+1);
        while(n--){
            cout<<j<<endl;
            j++;
        }
    }

    return 0;
}