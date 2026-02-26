#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string a;
    list<string>c={"Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M"};
    for (string i : c){
        cout<<i<<endl;
    }
    a=c[9];
    cout<<a<<endl;
}