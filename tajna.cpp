#include <iostream>
#include <vector>

using namespace std;

int main(){
    string str;
    vector<pair<int,int>> multiplies;
    cin>>str;
    int n=str.size();
    int l(1),c(n),l1,c1;
    for(int c(1); c<=n; c++){
        for(int l(1); l<=c; l++){
            if(l*c==n && l<=c){
                multiplies.push_back({l,c});
            }
        }
    }
    int a(0);
    for (auto i : multiplies)
    {
        if(i.first>a){
            a=i.first;
            l=i.first;
            c=i.second;
        }
    }
    char matrix[l][c];
    n=0;
    for(int i(0); i<c; i++){
        for(int j(0); j<l; j++){
            matrix[j][i]=str[n];
            n++;
        }
    }
    for(int i(0); i<l; i++){
        for(int j(0); j<c; j++){
            cout<<matrix[i][j];
        }
    }

    return 0;
}