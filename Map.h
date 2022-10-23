#include <iostream>
#include <fstream>
using namespace std;
class Map
{
	int** map; // карта зі скарбом
	int size; // розмір масиву
public:
	Map(int);//конструктор
	~Map();//деструктор
	bool setMapFromFile();//зчитування з файлу
	void setMapFromInput();//ручне заповнення
	void setRandMap();//рандомне заповнення
	void findTreasure();//алгоритм пошуку скарбу
	//перегрузка оператора << для виведення карти на екран
	friend ostream& operator<<(ostream& out, Map& m); 
};