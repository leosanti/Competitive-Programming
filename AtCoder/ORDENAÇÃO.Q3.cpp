#include<bits/stdc++.h>

using namespace std;

int v1[7] = {10, 8, 6, 4, 2, 1, 3};
int v2[7] = {10, 8, 6, 4, 2, 1, 3};
int countbubble = 0, countselection = 0;

void sortBubble() {
    int i, j;
    for(i = 0; i < 7-1; i++) {
        for(j = 0; j < 7-i-1; j++){
            if (v2[j] > v2[j+1]) {
                int aux = v2[j];
                v2[j] = v2[j+1];
                v2[j+1] = aux;
                countbubble++;
            }
        }
    }
} 

void sortSelection() {
    int i, j, min;
    for(i = 0; i < 7 -1; i++) {
        min = i;
        for(j = i+1; j < 7; j++) {
            if(v1[j] < v1[min]){
                min = j;
            }
        }
        if(i != min) {
            countselection++;
            int aux = v1[min];
            v1[min] = v1[i];
            v1[i] = aux;
        }
       
    }
}

int main() {

    sortBubble();
    sortSelection();

    cout << "Contador Selection: " << countselection << endl;
    cout << "Contador Bubble: " << countbubble << endl;

    return 0;

}