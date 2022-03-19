#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> move_0(vector<vector<int>> cases);
vector<vector<int>> move_1(vector<vector<int>> cases);
vector<vector<int>> move_2(vector<vector<int>> cases);
vector<vector<int>> move_3(vector<vector<int>> cases);
vector<vector<int>>  multiplication(vector<vector<int>> cases);

bool checkAlign(vector<int> vec);

int main(){

    vector<vector<int>> cases;
    int n;
    for(int i(0); i<4; i++){
        vector<int> pop;
        for(int j(0); j<4; j++){
            cin >> n;
            pop.push_back(n);
        }
        cases.push_back(pop);
    }
    cin >> n;
    switch (n)
    {
    case 0:
        cases=move_0(cases);
        cases=multiplication(cases);
        cases=move_0(cases);
        break;
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    default:
        break;
    }

    for(int i(0); i<4; i++){
        for(int j(0); j<4; j++){
            cout << cases[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}

vector<vector<int>>  multiplication(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
        for(int j(0); j<4; j++){
         if(cases[i][j]==cases[i][j+1]){
            cases[i][j]*=2;
            cases[i][j+1]=0;
         }   
        }
    } 

    return cases;  
}

bool checkAlign(vector<int> vec){
    for(int i(0); i<vec.size(); i++){
        if(vec[i]==0){
            for(int j(i+1); j<vec.size(); j++){
                if(vec[j]==0){
                    return false;
                }
            }
        }
    }
    return true;
}

vector<vector<int>> move_0(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
            bool a=true;
            while(a){
                a=false;
                for(int j(0); j<4; j++){
                    if(cases[i][j]==0 && cases[i][j+1]!=0){
                        int b=cases[i][j];
                        cases[i][j]=cases[i][j+1];
                        cases[i][j+1]=b;
                        a=true;
                    }
                }      
            }
            
        }
        return cases;
}

vector<vector<int>> move_1(vector<vector<int>> cases){

}
vector<vector<int>> move_2(vector<vector<int>> cases){

}
vector<vector<int>> move_3(vector<vector<int>> cases){
    
}
