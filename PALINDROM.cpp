#include <iostream>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main (){
	string recenica, obrnuta;
	getline (cin,recenica);
	obrnuta = recenica;
	reverse(obrnuta.begin(), obrnuta.end());
	if(recenica==obrnuta){
		cout << "palindrom" << endl;
	}else{
		cout << "nije palindrom" << endl;
	}
	system("PAUSE");
	return 0;
}
