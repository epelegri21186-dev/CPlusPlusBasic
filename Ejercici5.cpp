#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x<18){
        cout << "Tens meny de 18 anys"<<endl;
    }else if (x>18){
        cout<<"Tens més de 18 anys"<<endl;
    }else{
        cout<<"Tens 18 anys"<<endl;
    }
}