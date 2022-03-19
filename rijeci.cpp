#include <iostream>

int main(){

    int n,b(0),a(1),tmp(0);
    std::cin>>n;
    while(n--){
        tmp=a;
        a=b;
        b+=tmp;
    }
    std::cout << a<<" "<< b<<std::endl;
    return 0;
}