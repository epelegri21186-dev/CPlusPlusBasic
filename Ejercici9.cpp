#include <iostream>
using namespace std;
int x,y,z;
int main(){
    cin >> x;
    cin >> y;
    cin >>z;
    if (y>z && y>x){
        if (x==z){
            cout<<y<<" > "<<z<<" = "<<x<<endl;
        }else if (x>z){
            cout<<y<<" > "<<x<<" > "<<z<<endl;
        }else{
            cout<<y<<" > "<<z<<" > "<<x<<endl;
        }
    }else if (y<x && z<x){
                if (y==z){
            cout<<x<<" > "<<z<<" = "<<y<<endl;
        }else if (y>z){
            cout<<x<<" > "<<y<<" > "<<z<<endl;
        }else{
            cout<<x<<" > "<<z<<" > "<<y<<endl;
        }
    }else if(z>x  && z>y){
        if (y==x){
            cout<<z<<" > "<<x<<" = "<<y<<endl;
        }else if (y>z){
            cout<<z<<" > "<<y<<" > "<<x<<endl;
        }else{
            cout<<z<<" > "<<x<<" > "<<y<<endl;
        }
    }else if(x==y && x!=z){
        if (x<z){
            cout<<z<<" > "<<x<<" = "<<y<<endl;
        }else{
            cout<<y<<" = "<<x<<" > "<<z<<endl;
        }
    }else if(z==y && z!=x){
        if (x>z){
            cout<<x<<" > "<<z<<" = "<<y<<endl;
        }else{
            cout<<y<<" = "<<z<<" > "<<x<<endl;
        }
    }else if(x==z && x!=y){
        if (x<y){
            cout<<y<<" > "<<x<<" = "<<z<<endl;
        }else{
            cout<<z<<" = "<<x<<" > "<<y<<endl;
        }
    }else{
        cout<<z<<" = "<<x<<" = "<<y<<endl;
    }
}