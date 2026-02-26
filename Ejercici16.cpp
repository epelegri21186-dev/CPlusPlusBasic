#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    char z;
    cin>>x;
    cin>>z;
    string s;
    for (int i = 0; i < x; ++i) {
        s += z;
    }
    cout<<s<<endl;
}