#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string invertir(string a){
    reverse(a.begin(), a.end());
    return a;
}
int main(){
    string z;
    string x;
    x="rallar";
    z=invertir(x);
    if (x==z){
        cout<<"Verdader"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}