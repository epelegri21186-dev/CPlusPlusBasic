#include <iostream>
#include <vector>
using namespace std;
int suma(const vector <int>& t){
    int a=0;
    for (int x:t){
        a+=x;
    }
        return a;
}

int multiplicar(const vector <int>& t){
    int x=1;
    for (int b:t){
        x*=b;
    }
        return x;
}
int main(){
    vector<int>w={1,2,3,4};
    cout<<suma(w)<<endl;
    cout<<multiplicar(w)<<endl;
}