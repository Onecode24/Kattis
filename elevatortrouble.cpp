#include <iostream>

using namespace std;

int main(){

    int f,s,g,u,d,n(0);
    cin >>f>>s>>g>>u>>d;
    int i(s),j(g);
    while(s!=g){
        if(s<g){
            if(u==0){
                cout<<"use the stairs"<<endl;
                return 0;
            }
            s+=u;
            n++;
            
        }else if(s>g){
            if(d==0){
                cout<<"use the stairs"<<endl;
                return 0;
            }
            s-=d;
            n++;
        }
        if(s==i){
            cout<<"use the stairs"<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}