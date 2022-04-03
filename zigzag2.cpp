#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool zigzag(string str){
    string a,b;
    a=str[0];b=str[1];
    bool c=(a>b);
    for(int i(0); i<(str.size()-1); i++){
        a=str[i];b=str[i+1];
        if((a>b)!=c){
            return false;
        }else{
            c=!c;
        }
    }
    return true;
}

bool isready(string str,string s){
    int a=str.length()-1;
    for(int i(0); i<str.length(); i++){
        int j=i;
        if(str[i]==s[0]){
            if(s.length()>(str.length()-i)) return false;
            else {
                for(int j(0); j<s.length(); j++){
                    if(str.substr(i,a).find(s[j])==-1) return false;
                }
            }
        }
    }
    return true;
}


int main(){
    int n ;
    string s,str;
    vector<string> permu;
    cin>>n;
    int nbr(n);
    while(n--){
        cin>>s;
        str+=s;
    }
    s=str;
    sort(str.begin(),str.end());

    do
    {
        permu.push_back(str);
    } while (next_permutation(str.begin(),str.end()));
    int j=str.size(),l(1);
    n=0;
    for(int k(1); k<j; k++ ){
        set<string> nbrz;
        for(int i(0); i<permu.size(); i++){
            str=permu[i].substr(0,k);
            if(zigzag(str) && isready(s,str)){
                nbrz.insert(str);
            }   
        }
        for(string i : nbrz){
            cout<<i<<endl;
        } 
        cout<<endl;
        if(nbrz.size()>n){
            n=nbrz.size();
            l=k;
        }  
    }

    cout<<l;
    //cout<<zigzag("410");
    return 0;
}