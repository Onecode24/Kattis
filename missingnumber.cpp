#include <iostream>
#include <vector>

using namespace std;

bool iscounting(vector<int> vec,int n);

int main(){

    int a,b,max(0); 
    vector<int> vec;
    cin>>a;
    while (a--)
    {
        cin>>b;
        vec.push_back(b);   
    }

    for(auto i:vec){
        if(max<i)max=i;
    }
    bool isgood(true);
    for(int i(1); i<max; i++)
    {
        if(!iscounting(vec,i)){
            cout << i <<endl;
            isgood=false;
        }
    }
    if(isgood){
        cout << "good job"<<endl;
    }
    

    return 0;
}

bool iscounting(vector<int> vec,int n){
    for (size_t i = 0; i < vec.size(); i++)
    {
        if(vec[i]==n) return true;
    }
    return false;
    
}