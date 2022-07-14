#include <iostream>
#include<string>
using namespace std;
const int width=20,length=20;
int x,y,z;
string batsman,original_decision;

void set_up(){
    cout<<"Batsman:"<<endl;
    cin>>batsman;
    cout<<endl;
    cout<<"Original Decision:"<<endl;
    cin>>original_decision;
    cout<<endl;
    cout<<"Ball Tracking:"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<endl;
}
void make_pitch(){
    for(int i=0;i<width;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<width-1;i++){
        for(int j=0;j<length;j++){
            if(i==x && j==y){
                cout<<"o";
            }
            if(j==0 || j==length-1){
                cout<<"*";
            }else{
                if(j>=8 && j<=11){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    for(int i=0;i<width;i++){
        cout<<"*";
    }
    cout<<endl;
}
void decision(){
    if(batsman=="Right"){
        cout<<"Impact:"<<endl;
        cout<<"Inline"<<endl;
        cout<<endl;
        if(x>=8 && x<=11){
            cout<<"Pitching:"<<endl;
            cout<<"Inline"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Lost"<<endl;
                cout<<endl;
            }
        }else if(x<8){
            cout<<"Pitching:"<<endl;
            cout<<"Outside Off"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Lost"<<endl;
                cout<<endl;
            }
        }else{
            cout<<"Pitching:"<<endl;
            cout<<"Outside Leg"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }
        }
    }else{
        cout<<"Impact:"<<endl;
        cout<<"Inline"<<endl;
        cout<<endl;
        if(x>=8 && x<=11){
            cout<<"Pitching:"<<endl;
            cout<<"Inline"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Lost"<<endl;
                cout<<endl;
            }
        }else if(x<8){
            cout<<"Pitching:"<<endl;
            cout<<"Outside Leg"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }
        }else{
            cout<<"Pitching:"<<endl;
            cout<<"Outside Off"<<endl;
            cout<<endl;
            if(z>4){
                cout<<"Wickets:"<<endl;
                cout<<"Missing"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Retained"<<endl;
                cout<<endl;
            }else{
                cout<<"Wickets:"<<endl;
                cout<<"Hitting"<<endl;
                cout<<endl;
                cout<<"Review:"<<endl;
                cout<<"Lost"<<endl;
                cout<<endl;
            }
        }
    }
}
int main(){
    set_up();
    make_pitch();
    decision();
    return 0;
}