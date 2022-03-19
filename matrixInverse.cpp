#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,i(1);
    while(cin >>a>>b>>c>>d){
        int delta=((a*d)-(b*c));
        cout<<"Case "<<i<<":"<<endl;
        cout << d/delta<<" "<<-b/delta<<endl;
        cout << -c/delta<<" "<<a/delta<<endl;
        i++;
    }


    return 0;
}