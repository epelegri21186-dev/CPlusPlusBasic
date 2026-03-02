#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string>a={"Albert", "Maria", "Alex", "David"};
    int n=0;
    for(const string i:a){
        if (i[0]=='a' || i[0]=='A'){
            n++;
        }
    }
    cout<<n<<endl;
}