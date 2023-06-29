#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVectorA(int N){
	vector<int> A;
	int random;
		
	srand(time(NULL));
	for(int i=0; i<N; i++){
		random = rand()%30;
		A.push_back(random);
	}
	return A;
}

void MostrarVectorA(vector<int> A){
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
}

vector<int> GenerarVectorAcumulador(vector<int> A){
	vector<int> B;
	int suma=0;
	for(int i=0; i<A.size(); i++){
		suma += A[i];
		B.push_back(suma);
	}
	return B;
}

void MostrarVectorAcumulador(vector<int> B){
	for(int i=0; i<B.size(); i++){
		cout<<B[i]<<"/";
	}
}

int main(){
	
	int N;
	cout<<"Ingrese Cantidad de numeros : ";
	cin>>N;
	
	cout<<endl;
	vector<int> A = GenerarVectorA(N);
	cout<<"Vector A : ";
	MostrarVectorA(A);
	
	cout<<endl<<endl;
	vector<int> B = GenerarVectorAcumulador(A);
	cout<<"Vector Acumalador : ";
	MostrarVectorAcumulador(B);
	
	return 0;
}
