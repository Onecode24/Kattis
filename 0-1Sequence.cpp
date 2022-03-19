#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <ctime>

using namespace std;

bool check(vector<string> str,string s);
bool checkSwap(string str);

int main(){
    bool val=true;
    string str;vector<char> letters;vector<int> interrogation;
    int number(0);
    vector<string> all;
    srand(time(nullptr));
    cin >> str;
    
    for(int i(0); i<str.length(); i++){
        letters.push_back(str[i]);
    }
    for(int i(0); i<letters.size(); i++){
        if(letters[i]=='?'){
            interrogation.push_back(i);
        }
    }

    while(all.size()!=pow(2,interrogation.size())){
        string strs;
        for(int i(0); i<letters.size(); i++){
            
            if(letters[i]!='?')
                strs+=letters[i];
            else if(letters[i]=='?'){
                int num=rand()%2;
                strs+=to_string(num);
            }
        }
        if(!check(all,strs)){
            all.push_back(strs);
        }
    }

    /*for(int i(0); i<all.size(); i++){
        cout<< all[i]<<endl;
    }*/

    for(int i(0); i<all.size(); i++){
       while(checkSwap(all[i])){
            for(int j(0); j<all[i].length()-1; j++){
            if(all[i][j]=='1' && all[i][j+1]=='0'){
                all[i][j]='0';
                all[i][j+1]='1';
                number++;
            }
        }
       }
    }
    int f=number%1000000007;

    cout << f <<endl;

    return 0;
}


bool check(vector<string> str,string s){
    for(int i(0); i<str.size(); i++){
        if(str[i]==s){
            return true;
        }
    }
    return false;
}

bool checkSwap(string str){
    for(int j(0); j<str.length()-1; j++){
        if(str[j]=='1' && str[j+1]=='0'){
               return true;
        }
    }
    return false;
}