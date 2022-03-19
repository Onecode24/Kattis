#include <iostream>

using namespace std;

int main(){

    int a;
    cin >> a;
    while(a--){
        int b,c,d;
        cin >> b>>c>>d;
        if((c-d)<b)    cout <<"do not advertise"<<endl;
        else if((c-d)>b)    cout <<"advertise"<<endl;
        else cout<< "does not matter"<<endl;
    }


    return 0;
}