#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> move_0(vector<vector<int>> cases);
vector<vector<int>> move_1(vector<vector<int>> cases);
vector<vector<int>> move_2(vector<vector<int>> cases);
vector<vector<int>> move_3(vector<vector<int>> cases);
vector<vector<int>>  multiplication0(vector<vector<int>> cases);
vector<vector<int>>  multiplication1(vector<vector<int>> cases);
vector<vector<int>>  multiplication2(vector<vector<int>> cases);
vector<vector<int>>  multiplication3(vector<vector<int>> cases);

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
        cases=multiplication0(cases);
        cases=move_0(cases);
        break;
    case 1:
        cases=move_1(cases);
        cases=multiplication1(cases);
        cases=move_1(cases);
        break;
    case 2:
        cases=move_2(cases);
        cases=multiplication2(cases);
        cases=move_2(cases);
        break;
    case 3:
        cases=move_3(cases);
        cases=multiplication3(cases);
        cases=move_3(cases);
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

vector<vector<int>>  multiplication0(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
        for(int j(0); j<3; j++){
            if(cases[i][j]==cases[i][j+1]){
                cases[i][j]*=2;
                cases[i][j+1]=0;
            }   
        }
    } 
    return cases;  
}

vector<vector<int>>  multiplication2(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
        for(int j(3); j>0; j--){
            if(cases[i][j]==cases[i][j-1]){
                cases[i][j]*=2;
                cases[i][j-1]=0;
            }   
        }
    } 
    return cases;  
}

vector<vector<int>>  multiplication1(vector<vector<int>> cases){
    for(int j(0); j<4; j++){
        for(int i(0); i<3; i++){
            if(cases[i][j]==cases[i+1][j]){
                cases[i][j]*=2;
                cases[i+1][j]=0;
            }   
        }
    } 
    return cases;  
}

vector<vector<int>>  multiplication3(vector<vector<int>> cases){
    for(int j(0); j<4; j++){
        for(int i(3); i>0; i--){
            if(cases[i][j]==cases[i-1][j]){
                cases[i][j]*=2;
                cases[i-1][j]=0;
            }   
        }
    } 
    return cases;  
}


vector<vector<int>> move_0(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
        bool a=true;
        while(a){
            a=false;
            for(int j(0); j<3; j++){
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
    for(int j(0); j<4; j++){
        bool a=true;
        while(a){
            a=false;
            for(int i(0); i<3; i++){
                if(cases[i][j]==0 && cases[i+1][j]!=0){
                    int b=cases[i][j];
                    cases[i][j]=cases[i+1][j];
                    cases[i+1][j]=b;
                    a=true;
                }
            }      
        }
    
    }
    return cases;
}
vector<vector<int>> move_2(vector<vector<int>> cases){
    for(int i(0); i<4; i++){
        bool a=true;
        while(a){
            a=false;
            for(int j(0); j<3; j++){
                if(cases[i][j]!=0 && cases[i][j+1]==0){
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
vector<vector<int>> move_3(vector<vector<int>> cases){
    for(int j(0); j<4; j++){
        bool a=true;
        while(a){
            a=false;
            for(int i(0); i<3; i++){
                if(cases[i][j]!=0 && cases[i+1][j]==0){
                    int b=cases[i][j];
                    cases[i][j]=cases[i+1][j];
                    cases[i+1][j]=b;
                    a=true;
                }
            }      
        }
    
    }
    return cases;
}

