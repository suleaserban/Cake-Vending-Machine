#include "Windows.h"
#include"CommandPanel.h"
//Sulea Serban Gabriel 6.2

int main()

{
	CommandPanel commandPannel;
	int nrpraji;
	int opt;
	string numepraji;
	
	do {
		system("CLS");

		cout << "1. Afisare meniu\n";

		cout << "2. Afisare produse din carusel\n";

		cout << "0. Iesire\n";
		cout << "Introduceti optiunea dorita:\n "; cin >> opt;

		switch (opt)

		{

		case 1: commandPannel.showProducts();

			cout << "Pentru a reveni la meniul principal apasati 0.\n";
				cout<<"Scrieti ce prajitura doriti sa obtineti : \n";

			cin >> numepraji;

			if (numepraji == "0") break;

			cout << "Cate prajituri din acestea vreti?\n"; 

			cin >> nrpraji;

			if (nrpraji == 1)

				commandPannel.selectProduct(numepraji);

			else

				commandPannel.selectProduct(numepraji, nrpraji);

			break;

		case 2: commandPannel.showProductsInCarousel();

			cout << "Pentru a reveni la meniul principal apasati 0.\n";

			cout<<"Scrieti ce prajitura doriti sa mancati:\n"; cin >> numepraji;

			if (numepraji == "0")

				break;
			commandPannel.selectProduct(numepraji);

			break;
		case 0: 

			break;
		default: cout << " INCERCATI SA PUNETI O OPTIUNE CORECTA\n";

			break;
		}

	} while (opt);

	return 0;


}