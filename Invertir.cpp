


string invertir(string, s){
    string a;
    for (int i=s.length(); i>0; i--){
        a +=i;
    }
    return a;
}
int main(){
    string s,r;
    cin<<s;
    r=invertir(s);
    return 0;
}