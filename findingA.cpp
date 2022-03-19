#include <iostream>

int main(){

    std::string str,res;
    std::cin >> str;
    bool n=false;
    for(int i(0); i<str.size(); i++){
        if(str[i]=='a') n=true;
        if(n) res+=str[i];
    }

    std::cout << res <<std::endl;
 return 0;   
}