#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string p;
    cin >> p;
    int a=0,e=0,i=0,o=0,u=0;
    for (int h=0; h<p.size();h++){
        if (p[h]=='a'){
            a++;
        }else if (p[h]=='e'){
            e++;
        }else if (p[h]=='i'){
            i++;
        }else if (p[h]=='i'){
            i++;
        }else if (p[h]=='o'){
            o++;
        }else if (p[h]=='u'){
            u++;
        }else{

        }
    }
    cout<<"Hi ha "<<a<<" a's "<<e<<" e's "<<i<<" i's "<<o<<" o's y "<<u<<" u's "<<endl;
}