#include<iostream>
using namespace std;

int main() {
	int mes;
	int dias;

	cout << "Escriba el numero del mes: " << endl;
	cin >> mes;

	dias = (mes == 1) * 31 + (mes == 2) * 28 + (mes == 3) * 31 + (mes == 4) * 30 + (mes == 5) * 31 + (mes == 6) * 30 + (mes == 7) * 31 + (mes == 8) * 31 + (mes == 9) * 30 + (mes == 10) * 31 + (mes == 11) * 30 + (mes == 12) * 31;

	cout << "El mes numero " << mes << " tiene " << dias << " dias" << endl;

	system("pause");

}