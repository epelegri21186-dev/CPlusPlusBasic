#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

char minminezar(char w){
    char z;
    z=tolower(w);
    return z;
}

int main(){
    char a;
    cin >>a;
    minminezar(a);
    char b=toupper(a);
    vector<string>x={"Albert", "Maria", "Alex", "David"};
    int n=0;
    for(const string i:x){
        if (i[0]==a || i[0]==b){
            n++;
        }
    }
    cout<<n<<endl;
}