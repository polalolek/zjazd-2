// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "podaj liczbe od 1 do 12.";
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "Styczen." << endl;
		cout << "Styczen ma 31 dni w miesiacu i jest pochmurnie.";
		break;
	case 2: 
		cout << "Luty." << endl; 
		cout << "Luty ma 28 dni w miesiacu i jest pochmurnie."; 
		break;
	case 3:
		cout << "Marzec." << endl;
		cout << "Marzec ma 31 dni w miesiacu i jest pochmurnie.";
		break;
	case 4:
		cout << "Kwiecien." << endl;
		cout << "Kwiecien ma 30 dni w miesiacu i jest slonecznie.";
		break;
	case 5:
		cout << "Maj." << endl;
		cout << "Maj ma 31 dni w miesiacu i jest slonecznie.";
		break;
	case 6:
		cout << "Czerwiec." << endl;
		cout << "Czerwiec ma 30 dni w miesiacu i jest slonecznie.";
		break;
	case 7:
		cout << "Lipiec." << endl;
		cout << "Lipiec ma 31 dni w miesiacu i jest slonecznie.";
		break;
	case 8:
		cout << "Sierpien." << endl;
		cout << "Sierpien ma 31 dni w miesiacu i jest slonecznie.";
		break;
	case 9:
		cout << "Wrzesien." << endl;
		cout << "Wrzesien ma 30 dni w miesiacu i jest slonecznie.";
		break;
	case 10: 
		cout << "Pazdziernik." << endl;
		cout << "Pazdziernik ma 31 dni w miesiacu i jest pochmurnie.";
		break;
	case 11:
		cout << "Listopad." << endl;
		cout << "Listopad ma 30 dni w miesiacu i jest pochmurnie.";
		break;
	case 12:
		cout << "Grudzien." << endl;
		cout << "Grudzien ma 31 dni w miesiacu i jest pochmurnie.";
		break;
	default:
		cout << "wybrales liczbe spoza zakresu.";
	}
	return 0;
}
