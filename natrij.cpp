#include <iostream>

using namespace std;

int main(){

    string h1,h2;
    cin >>h1>>h2;
    int a1,a2,b1,b2,c1,c2;
    a1=stoi(h1.substr(0,2));
    a2=stoi(h2.substr(0,2));
    b1=stoi(h1.substr(3,2));
    b2=stoi(h2.substr(3,2));
    c1=stoi(h1.substr(6,2));
    c2=stoi(h2.substr(6,2));

    int h(0),m(0),s(0),r1(0),r2(0);
    if(a1==a2 && b1==b2 && c1==c2){
        cout <<"24:00:00"<<endl;
        return 0;
    } 
    // while(a2!=a1){
    //     a2--;
    //     if(a2==0){
    //         a2=24;
    //     }
    //     h++;
    // }
    // while(b2!=b1){
    //     b2--;
    //     if(b2==0){
    //         b2=60;
    //         r1++;
    //     }
    //     m++;
    // }
    // while(c2!=c1){
    //     c2--;
    //     if(c2==0){
    //         c2=60;
    //         r2++;
    //     }
    //     s++;
    // }

    // h=(a2-a1);
    // if(h<0) h+=24;
    // m=(b2-b1);
    // if(m<0){
    //     m+=60;
    //     r1++;
    // }
    // s=(c2-c1);
    // if(s<0){
    //     s+=60;
    //     r2++;
    // }

    // h-=r1;m-=r2;
    
    // if(m==-1){
    //     m=59;
    //     h--;
    // }
    // if(h==-1 || h==-2) h+=24;

    s=(c2-c1);
    if(s<0){
        s+=60;
        r2++;
    }
    m=(b2-b1)-r2;
    if(m<0){
        m+=60;
        r1++;
    }
    h=(a2-a1)-r1;
    if(h<0) h+=24;

    string str;
    if(h<10){
        str+="0";
        str+=to_string(h);
    }else str+=to_string(h);
    str+=":";
    if(m<10){
        str+="0";
        str+=to_string(m);
    }else str+=to_string(m);
    str+=":";
    if(s<10){
        str+="0";
        str+=to_string(s);
    }else str+=to_string(s);


    cout<<str<<endl;


    return 0;
}