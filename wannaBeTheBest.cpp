#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>


using namespace std;

bool checkUp(vector<int> tab,int n);

int main(){

    map<int,int> att,def,life;
    int n,k,a,b,c;
    cin >> n>>k;
    while(n--){
        cin >>a>>b>>c;
        att.emplace(a,n);
        def.emplace(b,n);
        life.emplace(c,n);
    }
    set<int> pokemon;
    auto itr1=att.end();
    auto itr2=def.end();
    auto itr3=life.end();
    itr1--;itr2--;itr3--;

    while(k--){
        pokemon.insert(itr1->second);
        pokemon.insert(itr2->second);
        pokemon.insert(itr3->second);
        itr1--;itr2--;itr3--;
    }

    cout << pokemon.size();






//     int n,k,a,b,c,tmp;
//     cin >> n>> k;
//     vector<int> tab,max,att,def,life;
//     map<int,vector<int>> Poke;
//     tmp=n;
//     while(n--){
//         vector<int> vec;
//         cin>> a>>b>>c;
//         vec.push_back(a);
//         vec.push_back(b);
//         vec.push_back(c);
//         Poke.insert({n+1,vec});
//     }
       
//     for(int i(0); i<3; i++){
//         vector<int> maxTab;
//         int tmp(k);
//         while(tmp--){
//             int maxi(0),indice(0);
//             for(auto j : Poke){
//                 auto a=j.second;
//                 if(a[i]>maxi && checkUp(maxTab,a[i])==false){
//                     maxi=a[i];
//                     indice=j.first;
//                 }
//             }

//             tab.push_back(indice);
//             maxTab.push_back(maxi);
//         }
        
//     }
    

//     sort(tab.begin(),tab.end());
//     auto last=unique(tab.begin(),tab.end());
//     tab.erase(last,tab.end());
//     cout << tab.size()<<endl;
     return 0;
 }


// bool checkUp(vector<int> tab,int n){
//     for(int i(0); i<tab.size(); i++){
//         if(n==tab[i]) return true;
//     }
//     return false;
// }