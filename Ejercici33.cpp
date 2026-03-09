#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a=0, b=0, c=0, d=0;
    bool valid=false;
    cin >> a;
    if (a>=50000 && a<=800000){
        valid=true;
    }else{
        valid=false;
    }
    if (valid==false){
        cout<<"Porfavor vuelva  intentar-lo"<<endl;
    }
    cin >>b;
    if (b>=0.5 && b<=13){
        valid=true;
    }else{
        valid=false;
    }
    if (valid==false){
        cout<<"Porfavor vuelva  intentar-lo"<<endl;
    }
    cin >>c;
    if (c>=3 && c<=40){
        valid=true;
    }else{
        valid=false;
    }
    if (valid==false){
        cout<<"Porfavor vuelva  intentar-lo"<<endl;
    }
    d=a*pow(1+b/100, c);
    cout <<"El capital final es:\n"<<d<<"€"<<endl;
    return 0;

}