#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <sstream>
using namespace std;

int main(){
    int x;
    cin>>x;
    cin.ignore();
    list<string> l={};
    string a;
    getline(cin, a);
    stringstream ss(a);
    string p;
    while (ss >> p) {
        l.push_back(p);
    }
    for (string i : l){
        if (i.size()>x){
            cout<<i<<endl;
        }
    }
}