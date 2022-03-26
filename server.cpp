#include <iostream>

using namespace std;

int main(){
    
    int n,m,sum(0),a,j(0);
    cin >> n>> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        sum+=a;
        if(sum<=m) j++;
    }
    cout <<j<<endl;

    return 0;
}