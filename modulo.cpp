#include <iostream>
#include <set>
int main(){
    std::set<int> modulo;
    int i(0),j(10);
    while(j--){
        std::cin>>i;
        modulo.insert(i%42);
    }
    std::cout<< modulo.size();
    return 0;
}