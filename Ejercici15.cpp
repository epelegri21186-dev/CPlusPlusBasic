#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){
    bool v;
    v=true;
    int p,q;
    string x={};
    getline(cin, x);
    p=x.size();
    string w={};
    getline(cin, w);
    q=x.size();
    if (p==q){
          for (int i=0; i < p; i++){
                if (x[i] != w[i]) {
                v = false;
            }
        }
    }
    if (v==false){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}