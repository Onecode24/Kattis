#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int getMin_X(vector<pair<int,int>> trace){
    int j(0);
    for(auto i : trace){
        if(i.first<j){
            j=i.first;
        }
    }
    return abs(j)+1;
    
}

int getMin_Y(vector<pair<int,int>> trace){
    int j(0);
    for(auto i : trace){
        if(i.second<j){
            j=i.second;
        }
    }
    return abs(j)+1;
    
}


int main(){

    vector<pair<int,int>> trace;
    string str;
    set<int> lx,ly;
    int x(0),y(0),z(0),maxX(0),maxY(0);
    trace.push_back({x,y});
    while(cin >> str){
        if(str=="down") trace.push_back({++x,y});
        else if(str=="up") trace.push_back({--x,y});
        else if(str=="left") trace.push_back({x,--y});
        else if(str=="right") trace.push_back({x,++y});
        else if(z==0) return 0;
        else break;
        lx.insert(x);
        ly.insert(y);
        if(x>maxX) maxX=x;
        if(y>maxY) maxY=y;
        z=1;
    }

    //Pour determiner la longueur et largeur de la carte on
    // prend la valeurs absolu du min et le max auquel on ajoute 3
    x=getMin_X(trace)+maxX+2;
    y=getMin_Y(trace)+maxY+2;

    char path[x][y];
    for(int i(0); i<x; i++){
        for(int j(0); j<y; j++){
            if(i==0 || j==0 || i==x-1 || j==y-1){
                path[i][j]='#';
            }else path[i][j]=' ';
        }
    }
    //
    int x1=getMin_X(trace);
    int y1=getMin_Y(trace);

    for(auto i(0); i<trace.size();i++){
        trace[i].first+=x1;
        trace[i].second+=y1;
    }
     

    for(auto i : trace){
        path[i.first][i.second]='*';
    }
   
    auto i=trace[0];
    path[i.first][i.second]='S';
    i=trace[trace.size()-1];
    path[i.first][i.second]='E';


    for(int i(0); i<x; i++){
        for(int j(0); j<y; j++){
           cout<<path[i][j];
        }
        cout<<endl;
    }


    return 0;
}
