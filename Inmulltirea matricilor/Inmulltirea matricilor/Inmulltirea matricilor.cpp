// Inmulltirea matricilor.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int m,p,i,j,k,n,a[10][10],b[10][10],c[10][10]; //a,b cele 2 matrici, c matricea produs, i numara coloanele, j numara randurile, n numarul maxim de randuri, m numarul maxim de coloane
	cout<<"Introduceti numarul de coloane ale lui A:";
	cin>>m;
	cout<<"Introduceti numarul de randuri ale lui A:";
	cin>>n;
	cout<<"\n";
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=n;i++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"]=";
			cin>>a[i][j];
		}
	}

	cout<<"\n\tElementele matricei A sunt: "<<"\n\n";
		for(i=1;i<= n;i++)
			{
			for(j=1;j <= m;j++)
			{
				cout << "\t" << a[i][j];
			}
			cout << "\n";
			}

		cout << "\n\tIntroduceti numarul de coloane ale lui B: ";
	cin >> p;
	cout << "\n";
	for(i=1;i <= m; i++)
	{
		for(j=1;j <= p; j++)
		{
			cout<<"b["<<i<<"]"<<"["<<j<<"]=";
			cin >> b[i][j];
		}
	}
	cout<<"\n\n\tElementele matricei B sunt: " << "\n\n";
		for(i=1;i <= m;i++)
			{
			for(j=1;j <= p;j++)
			{
				cout << "\t" << b[i][j];
			}
			cout << "\n";
			}
		
		for(i=1;i <= n;i++)
		{
			for(j=1;j <= p;j++)
			{
					c[i][j]=0;
				for(k=1;k <= m;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		cout << "\n\tElementele matricei produs " << "\n\n";
			for(i=1;i <= n;i++)
				{
					for(j=1;j <= p;j++)
					{
						cout << "\t" << c[i][j];
					}
					cout << "\n";
				}
			cin.ignore();
			cin.get();
	return 0;
}
