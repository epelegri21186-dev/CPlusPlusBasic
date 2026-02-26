#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;



int main(){
    vector<int>a;
    int s;
    a={1,6,3,4,9,4,3};
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    s=a[0];
    cout<<s<<endl;
}