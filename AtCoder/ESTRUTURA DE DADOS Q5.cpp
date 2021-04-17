#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    int a = 0, g = 0, c = 0, t = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') a++;
        else if(s[i] == 'G') g++;
        else if(s[i] == 'C') c++;
        else if(s[i] == 'T') t++;
    }

    cout << "A: " << a << endl;
    cout << "G: " << g << endl; 
    cout << "C: " << c << endl; 
    cout << "T: " << t << endl; 
    cout << "Tamanho DNA: " << s.length() << endl;

    return 0;

}