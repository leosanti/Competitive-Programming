#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    int v[n];
    int maior = -1000, menor = 1000;
    int indicemenor, indicemaior;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] < menor){
            menor = v[i];
            indicemenor = i;
        }
        if(v[i] > maior){
            indicemaior = i;
            maior = v[i];
        }
    }
    int aux = v[n-1];
    v[n-1] = v[indicemaior];
    v[indicemaior] = aux;

    aux = v[0];
    v[0] = v[indicemenor];
    v[indicemenor] = aux;

    //cout << maior  << " " << menor << endl;
    //cout << indicemaior  << " " << indicemenor << endl;

    for(int i = 0; i < n; i++) {
        
        cout << v[i] << " ";

    }

    return 0;

}