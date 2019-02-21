// Ipotenuza.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{ double c1,c2,ip,pc;
cout<<"Cateta 1 este:";
cin>>c1;
cout<<"Cateta 2 este:";
cin>>c2;
pc=pow(c1,2)+pow(c2,2);
ip=sqrt(pc);
cout<<"Ipotenuza este:"<<ip;
cin.ignore();
cin.get();
    return 0;
}
