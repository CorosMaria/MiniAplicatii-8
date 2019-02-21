// se defineste si se apeleaza o functie care inlocuieste valorile din tablou cu patratele acestora
// la sfarsit se afiseaza elementele sirului rezultat
#include "stdafx.h"
#include < iostream >
#include < string >

using namespace std;
void patrat(double v[],int imdex_max);
int main(void)
{
	const int nr_max=5;
	int i;
	double nr[nr_max];
	cout << "\n\tProgramul cere " << nr_max << " numere dupa care le ridica la patrat si le afiseaza \n\n";
// introducere numere

	for (i=0;i < nr_max;i++){
		cout <<"\tIntroduceti numarul : [" << i << "] : ";
		cin >> nr[i];
	}
// afisarea numerelor

	cout << "\n\n\tNumerele introduse sunt: \n\n";
	for (i=0;i < nr_max;i++){
		cout << " : " << nr[i] ;
	}
// calcularea patratelor numerelor
	patrat(nr,nr_max);

// afisarea patratelor numerelor 

	cout << "\n\n\tPatratele numerelor sunt: \n\n";
	for (i=0;i < nr_max;i++){
		cout << " : " << nr[i] ;
	}
	cin.ignore();
	cin.get();
	return 0;
}

void patrat(double v[], int index_max)
{ 

	for (int i=0; i < index_max; i++){
			v[i]=v[i]*v[i]; 
		}
}