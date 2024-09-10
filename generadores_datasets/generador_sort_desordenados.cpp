#include <iostream>
#include <random>
#include <fstream>

using namespace std;

int main(){
    // Se cambió la salida y rangos de números a través
    // del código en las líneas seleccionadas con "***"
    ofstream file("dataset_sort_DESORDENADAS S.txt"); // ***
    if(!file){
        cerr << "NO SE PUDO ABRIR EL ARCHIVO PARA ESCRIBIR" << endl;
        return 1;
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> num_value(0, 1000); // ***
    uniform_int_distribution<> cant_num(0, 50000); // ***
    for(int j = 0; j < 100; j++){                  
        int cant = cant_num(gen);
        for(int i = cant; i >= 0; i--){
            file << i << " ";
        } 
        file << endl;
    }
    file.close();
    return 0;
}