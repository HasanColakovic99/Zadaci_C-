#include <iostream>
using namespace std;
int main (){
	int izbor, br_jela;
	do{
		cout << "---------------------------MENI--------------------------------" << endl;
		cout << endl;
		cout << "1. Cevapi petica                                    3 KM" << endl;
		cout << "2. Cevapi sedmica                                   4.5 KM" << endl;
		cout << "3. Cevapi desetka                                   6 KM" << endl;
		cout << "4. Pileci file classic                              3.5 KM" << endl;
		cout << "5. Pljeskavice classic                              3.5 KM" << endl;
		cout << "6. Kobasice classic                                 3 KM" << endl;
		cout << endl;
		cout << "7. Izlaz iz programa" << endl;
		cout << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << "Molimo Vas unesite vas izbor: ";
		cin >> izbor;
		if (izbor==7) break;
		cout << "Molimo Vas unesite koliko zelite obroka: ";
		cin >> br_jela;
		cout << endl;
		switch(izbor){
			case 1: {
				cout << "Narudzba:  Cevapi petica." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 3 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*3 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
			case 2: {
				cout << "Narudzba:  Cevapi sedmica." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 4.5 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*4.5 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
			case 3: {
				cout << "Narudzba:  Cevapi desetka." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 6 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*6 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
			case 4: {
				cout << "Narudzba:  Pileci file classic." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 3.5 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*3.5 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
			case 5: {
				cout << "Narudzba:  Pljeskavice classic." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 3.5 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*3.5 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
			case 6: {
				cout << "Narudzba:  Cevapi petica." << endl;
				cout << "Broj narudzbi: " << br_jela << endl;
				cout << "Cijena svake narudzbe iznosi svega 3 KM." << endl;
				cout << "Ukupan iznos za platiti: " << br_jela*3 << " KM" << endl;
				cout << endl;
				cout << "HVALA STO STE NAS POSJETILI!" << endl;
				cout << endl;
				break;
			}
		}
	}while(izbor!=7);
	return 0;
}
