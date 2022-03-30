#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long double a,b,c,n;
    cin>>a>>b>>c;
    if(a<=10 && b<=10 && c<=10){
        n=a*b/c;
        printf("%.18Lf",n);
    }else if(a<=10000 && b<=10000 && c<=10000){
        n=a*b/c;
        if(c==1) printf("%.0Lf",n);
        else printf("%.18Lf",n);
    }else if(a<=pow(10,9) && b<=pow(10,9) && c<=pow(10,9)){
        n=a*b/c;
        printf("%.18Lf",n);
    }
    return 0;
}

// else if(a<=pow(10,9) && b<=pow(10,9) && c==1){
//         n=a*b/c;
//         printf("%.0Lf",n);
//     }