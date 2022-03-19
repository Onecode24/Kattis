#include <iostream>

using namespace std;

int main(){

    int A,B,C,D;
    int user[3];
    cin>>A>>B>>C>>D>>user[0]>>user[1]>>user[2];

    int cycle1(A+B),cycle2(C+D);
   for (size_t i = 0; i < 3; i++)
   {
       int a=user[i]%cycle1,b=user[i]%cycle2,dog(0);
       if(a<=A && a!=0) dog++;
       if(b<=C && b!=0) dog++;
       if(dog==0)cout <<"none"<<endl;
       else if(dog==1) cout<<"one"<<endl;
       else if(dog==2) cout<<"both"<<endl;
   }
   

    return 0;
}