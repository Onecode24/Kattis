#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <time.h>
#include <set>

using namespace std;

string clean(string str);
bool validDay(string str);
int Bissextile (int A);

int main(){

    int n(0);
    string str,newStr;
    cin >> n;
    getline(cin,str);
    for (size_t i = 0; i < n; i++)
    {
        vector<string> allPermu,possible;
        set<string> final;
        getline(cin,str);
        str=clean(str);

        //Pour toutes les permutions possibles
        sort(str.begin(),str.end());
        do
        {
            if(validDay(str)) {
            final.insert(str);
            }
        } while (next_permutation(str.begin(),str.end()));
        
        cout << final.size() <<" ";
    
        bool yes=false;
        if(final.size()==0){
            cout<<endl;
            continue;
        }
        int y=2000;
        while(!yes){
            
                for(auto i : final){
                
                string year;
                year+=i[4];
                year+=i[5];
                year+=i[6];
                year+=i[7];
                if(stoi(year)==y){
                    yes=true;
                    possible.push_back(i);
                }
            }
            y++;
        }
        yes=false;
        y=1;
        vector<string> valide;
        while(!yes){
            
            for(auto i : possible){
                string month;
                month+=i[2];
                month+=i[3];
                if(stoi(month)==y){
                    yes=true;
                    valide.push_back(i);
                }
            }
            y++;
        }
        int min(32),k(0);
        for(int i(0); i<valide.size(); i++){
            string day;
            day+=valide[i][0];
            day+=valide[i][1];
            if(stoi(day)<min){
                min=stoi(day);
                k=i;
            }

        }

        cout <<valide[k][0]<<valide[k][1]<<" "<<valide[k][2]<<valide[k][3]<<" "<<valide[k][4]<<valide[k][5]<<valide[k][6]<<valide[k][7]<<endl;
    // int ok(0),ko,sec,calc;
    //     ok=stoi(final)

    //     for(auto i : final){
    //         int a(stoi(i.substr(0,2)));
    //         int b(stoi(i.substr(2,2)));
    //         int c(stoi(i.substr(4,4)));
            

    //         ok++;
    //     }
    
     }



    return 0;
}





// pour effacer les espaces avant les permutation possibles
string clean(string str){
    string Str;
    for(auto i : str) if(i!=' ') Str+=i;
    return Str;
}


//Pour verifier qu'une date est valide
bool validDay(string str){
    string day,month,year;
    day+=str[0];
    day+=str[1];

    month+=str[2];
    month+=str[3];

    year+=str[4];
    year+=str[5];
    year+=str[6];
    year+=str[7];
    int jMax(0);
    
    if(stoi(year)>=2000){
        int bix=Bissextile(stoi(year));
        if(stoi(month)<=0 || stoi(month)>12) return false;
        switch (stoi(month)){
        case 1:jMax=31; break;
        case 2: jMax=28+bix; break;
        case 3:jMax=31; break;
        case 4:jMax=30; break;
        case 5:jMax=31; break;
        case 6:jMax=30; break;
        case 7:jMax=31; break;
        case 8:jMax=31; break;
        case 9:jMax=30; break;
        case 10:jMax=31; break;
        case 11:jMax=30; break;
        case 12:jMax=31; break;
        }

        if(stoi(day)>jMax || stoi(day)==0) return false;
        return true;

    }else return false;
    
}


//Pour determiner si l'anné est bissestils ou pas
int Bissextile (int A)
{
    if(A%4 != 0) return false;
    if(A%400 == 0) return true;
    if(A%100 == 0 ) return false;
    return true;
}