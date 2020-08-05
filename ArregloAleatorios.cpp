#include <iostream>
#include <time.h>
using namespace std;

int numerosGenerados(int z);
void numeros(float x[], int y);

int main(){
    int numero[10];
    float copiados[10];
   
    for(int i = 0; i < 10; i++){
        numero[i] = numerosGenerados(10);
        copiados[i] = numero[i] *0.5;      
    }
    cout << "Números generados en un rango de [50,100]: " << endl;
    for(int i = 0; i < 10; i++){
        cout << numero[i] << "   ";
    }
    cout << "\n\nArreglo con la parte entera de los números anteriores dividos por 2: " << endl;
    numeros(copiados, 10);
    cout << endl;
    
   return 0;
}

int numerosGenerados(int z){
    int x[z];
    for(int i = 0; i < z;i++){
        x[i] = 50 + rand()%((100+1)-50);      
        return x[i];       
    } 
}

void numeros(float x[], int y){
    for(int i = 0; i < 10; i++){
        cout << x[i] << "  ";
    }
}
