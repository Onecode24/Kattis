#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,n(1),max(0);
    for(int i(1); i<=5 ; i++){
        cin >>a>>b>>c>>d;
        if(max<(a+b+c+d)){
            max=(a+b+c+d);
            n=i;
        }
    }

    cout<< n<<" "<<max;

    return 0;
}