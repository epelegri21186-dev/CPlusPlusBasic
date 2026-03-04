#include <iostream>
using namespace std;

int main(){
    bool traspas;
    traspas=false;
    int a;
    cin>>a;
    if (a%4==0){
        if (a%100==0){
            if (a%400==0){
                traspas=true;
            }else{
                traspas=false;
            }
        }else{
            traspas=true;
        }
    }
    if (traspas==true){
        cout<<"Si"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}