#include<iostream>
using namespace std;

void InterDirecto(int A[], int n){
    int aux;
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= n - 1; j++){
            if (A[j] > A[j + 1]){

                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
}

int main(){
    int A[100];
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    cout << "Ingrese los elementos:"<< endl;

    for (int i = 1; i <= n; i++){

        cout << "A[" << i << "]: ";
        cin >> A[i];

    }

    InterDirecto(A, n);
    cout << endl;
    cout << " Arreglo ordenado: ";

    for (int i = 1; i <= n; i++){
        cout << A[i] << " ";
    }

    return 0;
}