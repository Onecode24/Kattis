#include <iostream>
#include <cmath>

using namespace std;

float carreX(float a,float b){
    return pow(a,2)-pow(b,2);
}

float carreY(float a,float b){
    return 2*(a*b);
}

int main(){

    int i(1),n;
    float x,y;
    cout.precision(4);
    while (cin>>x>>y>>n)
    {
        float a(0),b(0);
        for(int j(0); j<n; j++){
            a=carreX(a,b)+x;
            b=carreY(a,b)+y;
        }
        if(sqrt(pow(a,2)+pow(b,2))<=2){
            cout<<"Case "<<i <<": IN"<<endl;
        }else{
            cout<<"Case "<<i <<": OUT"<<endl;
        }
        i++;
    }
    
    return 0;
}