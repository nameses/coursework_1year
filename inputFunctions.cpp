#include <iostream>
#include <chrono>
using namespace std;
#include "Map.h"
bool typeOfSet(Map &map)
{
	while(1)
	{
		char choice='0';
		cout << "Оберіть варіант введення карти:\n1.Готовий варіант(для карти 5*5)\n2.Ввести власноруч\n";
		cout << "3.Згенерувати\n4.Вийти\n";
		cin >> choice; //ввід відповіді
		cin.clear();
    cin.ignore(10000, '\n');
		switch (choice)
		{//варіанти продовження програми
			case '1':
				//зчитати карту з підготовленого файлу
				if(!map.setMapFromFile())
				{
					system("clear");
					cout << "Не вдалось відкрити файл. Спробуйте інший варіант.\n";
					break;
				}
				return true;
			case '2':
				//ввести карту власноруч
				map.setMapFromInput();
				return true;
			case '3':
				//рандомно заповнити карту
				map.setRandMap();
				return true;
			case '4':
				//вихід з програми
				return false;
			default:
				system("clear");
				cout << "Невірний ввід. Спробуйте ще раз!\n";
				break;
		}
	}
}
bool ContinueOrExit()
{
	cout << "\nЧи бажаєте зіграти ще раз?(y-так) ";
	char answer;
	cin >> answer;
	cin.clear();
	cin.ignore(10000, '\n');
	if (answer == 'y' || answer == 'Y')
		return true;
	return false;
}
