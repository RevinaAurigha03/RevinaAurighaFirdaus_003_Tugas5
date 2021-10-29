//*Revina Aurigha Firdaus (21091397003)*//

#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


int i, j, k, baris, kolom, m1[10]
[10], m2[10]
[10], hasil[10]
[10];
int main(){
	cout <<"OPRASI PERKALIAN MATRIKS\n";
	cout <<"___________________________\n";
	do{
		cout <<"Jumlah baris matriks : "; cin>>baris;
		cout <<"Jumlah kolom matriks : "; cin>>kolom;
	}
	while((baris>10)||(kolom>10));
	cout << "\nMatrix A" << endl;
	for(i=0;i<baris;i++)
	for(j=0;j<kolom;j++){
		cout <<"data [" << i << "," << j << "] = ";
		cin>>m1[i][j];
	}
	cout << "\nMatrix B" << endl;
	for(i=0;i<baris;i++)
	for(j=0;j<kolom;j++){
		cout <<"data [" << i << "," << j << "] = ";
		cin>>m2[i][j];
	}
	for(i=0; i<baris;i++)
	for(j=0; j<kolom; j++){
		hasil[i][j] =  m1[i][j] * m2[i][j];
	}
	for (k=0;k<1;k++)
	cout << "\nHasilnya..." << endl;
	cout << "Matrix A * Matrix B = Hasil Perkalian";
	for(i=0; i< baris; i++){
		cout<<'\n';
		for(j=0; j<kolom; j++)
		cout << setw(4) << m1[i][j];
		cout << " ";
		for(j=0; j<kolom; j++)
		cout << setw(4) << m2[i][j];
		cout << " ";
		for(j=0; j<kolom; j++)
		cout << setw(4) << hasil[i][j];
		cout << endl;
	}
	getch();
	return 0;

}
