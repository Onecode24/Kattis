#include <iostream>

using namespace std;

int main(){

    int n,a,b;
    cin >> n;
    while(n--){
        int sum(0);
        cin >> a >>b;
        for (size_t i = 1; i <=b; i++)
        {
            sum=sum+(i+1);
        }
        cout << a << " "<<sum<<endl;
    }


}