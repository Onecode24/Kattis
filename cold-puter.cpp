#include <iostream>

int main(){
    int a(0),b,n(0);
    std::cin >> a;
    while(a--){
        std::cin>> b;
        if(b<0) n++;
    }
    std::cout << n<< std::endl;
    return 0;
}