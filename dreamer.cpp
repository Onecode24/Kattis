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

        // do
        // {
        //     if(validDay(str)) {
        //     allPermu.insert(str);
        //     }
        // } while (next_permutation(str.begin(),str.end()));
        string str1,str2,str3,str4,str5,str6,str7;
        for(int i(0);i<str.length();i++){
            str1=str; 
            str1.erase(i,1);
            for(int j(0); i<str1.length(); i++){
                str2=str1;
                str2.erase(j,1);
                for(int k(0); k<str2.length(); k++){
                    str3=str2;
                    str3.erase(k,1);
                    for(int l(0); l<str3.length(); l++){
                        str4=str3;
                        str4.erase(l,1);
                        for(int m(0); m<str4.length(); m++){
                            str5=str4;
                            str5.erase(m,1);
                            for(int n(0); n<str5.length(); n++){
                                str6=str5;
                                str6.erase(n,1);
                                for(int o(0); o<str6.length(); o++){
                                    str7=str6;
                                    str7.erase(o,1);
                                    for(int p(0); p<str7.length(); p++){
                                        newStr="";
                                        newStr+=str[i];
                                        newStr+=str1[j];
                                        newStr+=str2[k];
                                        newStr+=str3[l];
                                        newStr+=str4[m];
                                        newStr+=str5[n];
                                        newStr+=str6[o];
                                        newStr+=str7[p];
                                        if(validDay(newStr)){
                                            allPermu.push_back(newStr);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        // do
        // {
        //     cout << newStr<<" ";
        // } while (next_permutation(newStr.begin(),newStr.end()));
        for(auto i : allPermu)  final.insert(i);




        cout << final.size() <<" ";
    
        bool yes=false;
        if(allPermu.size()==0){
            cout<<endl;
            continue;
        }
        int y=2000;
        while(!yes){
            
                for(auto i : allPermu){
                
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

        if(stoi(day)>jMax) return false;
        return true;

    }else return false;
    
}


//Pour determiner si l'anné est bissestils ou pas
int Bissextile (int A)
{
  return A % 4 != 0 && (A % 100 != 0 || A % 400 == 0);
}