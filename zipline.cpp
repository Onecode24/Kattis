#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){
        long double a,b,c,d,min,max,tmp;
        cin>>a>>b>>c>>d;
        if(b==c) min=a;
        else min=sqrt(pow(a,2)+pow(c-b,2));
        tmp=sqrt(pow(a/2,2)+pow(b-d,2));
        max=tmp+sqrt(pow(a/2,2)+pow(c-d,2));
        cout <<min<<" "<<max<<endl;
    }

    return 0;
}