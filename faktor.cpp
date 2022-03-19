#include <iostream>
#include <cmath>


int main(){

    int a,b;
    std::cin >> a>> b;
    bool k(true);
    float n(a);
    while (k)
    {
        if(ceil(n/a)==b) k=false;
        n++;
    }
    
    std::cout << n-1;
    return 0;
}