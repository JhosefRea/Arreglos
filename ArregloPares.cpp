
#include <iostream>
using namespace std;

void arreglopar(int pares[], int x);

int main(){
    int pares[50];
    cout<< "ELEMENTOS PARES"<< endl;
    arreglopar(pares, 50);
    
    return 0;
}
void arreglopar(int pares[], int x){
    int y = 0;
    for(int i = 0; i <= x; i ++ ){  
        pares[i] = y +2;
        y = pares[i];  
        cout << "Elemento " << i << ":  " << pares[i]  << endl;
    }
}


