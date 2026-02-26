#include <iostream>
using namespace std;
int x,y;
int main(){
    cin >> x;
    cin >> y;
    if (x<y){
        cout<<x<<" < "<<y<<endl;
    }else if (y<x){
        cout<<x<<" > "<<y<<endl;
    }else{
        cout<<x<<" = "<<y<<endl;
    }
}