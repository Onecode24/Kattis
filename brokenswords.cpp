#include <iostream>

int main(){

    int a,TB(0),LR(0),n(0),r1(0),r2(0);
    std::cin>>a;
    while(a--){
        std::string str;
        std::cin >> str;
        for(int i(0); i<4; i++){
            if((i==0 | i==1) && str[i]=='0') TB++;
            else if((i==2 | i==3) && str[i]=='0') LR++;
        }    
    }
    r1+=TB%2;
    r2+=LR%2;
    int b;
    a=TB/2;b=LR/2;
    if(a<b){
        n=a;
        r2+=(b-a)*2;
    }else if(a>b){
        n=b;
        r1+=(-b+a)*2;
    }else n=a;

    std::cout << n<< " "<< r1<< " "<< r2<<std::endl;
    
    return 0;
}