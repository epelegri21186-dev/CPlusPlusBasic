#include <iostream>
#include <bitset>
#include <sstream>
using namespace std;
char n;

string toOctal(int n){
    stringstream ss;
    ss << oct << n;
    return ss.str();
}

string toHexadecima(int){
    stringstream ss;
    ss << hex <<n;
    return ss.str();
}

string toBinary(int n){
    return bitset<16>(n).to_string();
}

int main(){
    double x,y,z,b,a,w;
    do
    {
        cout << "Menú\n " <<endl;
        cout <<"0--Salir" <<endl;
        cout <<"1--Suma" <<endl;
        cout << "2--Resta" <<endl;
        cout << "3--Diviso" <<endl;
        cout << "4--Multiplicació" <<endl;
        cout <<"5--Canvis de base" <<endl;
        cin >> x;
        if (x==1){
            cout << "Numero 1:"<< endl;
            cin >>  y;
            cout << "Numero 2:"<< endl;
            cin >> z;
            cout << "Resultado: " <<endl;
            cout << y +z << "\n"<<endl;
        } else if (x==2){
            cout << "Numero 1:"<< endl;
            cin >> y;
            cout << "Numero 2:"<< endl;
            cin >> z;
            cout << "Resultado: " <<endl;
            cout << y-z<< "\n";
        }else if(x==3){
            cout << "Numero 1:"<< endl;
            cin >> y;
            cout << "Numero 1:"<< endl;
            cin >> z;
            cout << "Resultado: " <<endl;
            cout << y / z<< "\n";
        }else if(x==4){
            cout << "Numero 1:"<< endl;
            cin >> y;
            cout << "Numero 1:"<< endl;
            cin >> z;
            cout << "Resultado: " <<endl;
            cout << y*z<< "\n";
        }else if(x==0){
            cout << "Hasta otra\n" <<endl;
        }else if (x==5){
            do{
                cout << "Menú Canvi de Base\n " <<endl;
                cout <<"Seleccióna que base quieres pasar desde Decimal" <<endl;
                cout <<"0--Salir" <<endl;
                cout << "1--Binari" <<endl;
                cout << "2--Octal" <<endl;
                cout << "3--Hexadecimal" <<endl;
                cin >>b;
                cout<<"Inserte tu numero en Decimal"<<endl;
                cin>> w;
                if (b==0){
                    cout<<"Estas saliendo de Canvi de Base"<<endl;
                }else if (b==1){
                    cout << toBinary(w)<<endl;
                }else if (b==2){
                    cout <<toOctal(w)<<endl;
                }else if (b==3) {
                    cout<<toHexadecima(w)<<endl;            
                }else{
                    cout << "Termino incorrecto prueva de nuevo\n" <<endl;
                }
            }while(b!=0);
        }else{
            cout << "Termino incorrecto prueva de nuevo\n" <<endl;
        }
    } while (x!=0);  
}