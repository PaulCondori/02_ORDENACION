#include<iostream>
using namespace std;

void ShellSort(int A[], int n){
	int k = n + 1;
	
	while (k > 1) {
		k = k/2;
		
		for (int i = k + 1; i <= n; i++){
			int aux = A[i];
			int j = i;
			
			while (j - k >= 1 && A[j - k] > aux){
				A[j] = A[j - k];
				j = j -k;
			}
			
			A[j] = aux;
		}
	}
}
int main(){
	int n;
	cout << "Ingrese la cantidad de elemtos: ";
	cin >> n;
	
	int A[n + 1];
	cout << "Ingrese los elementos: " << endl;
	for (int i = 1; i <= n; i++){
		cout <<" A[" << i << "]: ";
		cin >> A[i];
	}
	cout << endl;
	ShellSort(A, n);
	
	cout << "Areglo ordenado: " << endl;
	for (int i = 1; i<= n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	
	return 0;
}
