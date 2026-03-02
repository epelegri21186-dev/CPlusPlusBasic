#include <iostream>
#include <tuple>
using namespace std;

int main() {
    // Variables per emmagatzemar els números
    int a, p, m, l, k;
    int n;
    cin >> a;
    cin >> p;
    cin >> m;
    cin >> l;
    cin >> k;
    tuple<int, int, int, int, int> t = {a, p, m, l,k};
    cout<<"El limit es:\n"<<endl;
    cin >> n;
    cout<<"Els majors al nombre indicat son:\n"<<endl;
    if (get<0>(t) > n) cout << get<0>(t) << " "<<endl;
    if (get<1>(t) > n) cout << get<1>(t) << " "<<endl;
    if (get<2>(t) > n) cout << get<2>(t) << " "<<endl;
    if (get<3>(t) > n) cout << get<3>(t) << " "<<endl;
    if (get<4>(t) > n) cout << get<4>(t) << " "<<endl;
}