#include <iostream> // бібліотека вводу-виводу
#include <fstream>  // бібліотека для роботи з файлами
#include <chrono>  // бібліотека для використання таймеру
#include "inputFunctions.h"
using namespace std;
int main()
{
	system("clear");
	auto start = std::chrono::steady_clock::now();//початок таймеру
	while (1) //основна частина програми
	{
		Map map(5); //клас для вводу карти і взаємодії з нею
		//працює з розмірами від 2*2 до 9*9
		if(!typeOfSet(map)) break;
		system("clear");
		//виведення карти на екран
		cout << "Карта:\n" << map << endl;
		//знаходження "скарбу"
		map.findTreasure();
		//повторне проходження програми або вихід
		if(!ContinueOrExit()) break;
		system("clear");
	}
	chrono::duration<double> diff = chrono::steady_clock::now() - start;
	cout << "\nЧас роботи програми: " << diff.count() << endl;
	return 0;
}
