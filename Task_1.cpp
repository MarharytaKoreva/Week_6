#include <iostream>
using namespace std;

int main()
{
	//кількість спроб
	const int amount = 9;
	//кількість випадіння орла на монетці
	int countOfOrel = 0;
	//змінна для рандомного числа
	int number;
	//оновлення рандому
	srand(unsigned(time(0)));
	cout << "Value of coins (0 - heads, 1 - tails):" << endl;
	//цикл для кількості спроб
	for (int temp = 1; temp <= amount; ++temp)
	{
		//генеруємо число від 0 до 1 випадковим чином
		number = rand() % 2;
		//виводимо число
		cout << number << "\t";
		//якщо випало 0 - це означає орел. Збільшуємо кількість на один
		if (number == 0)
			++countOfOrel;
	}
	//виводимо скільки разів випав орел
	cout << "\nCount of heads on coins was: " << countOfOrel << " times" << endl;
	cout << "Result:" << endl;
	//якщо кількість була парною, то приймаємо рішення
	if (countOfOrel % 2 == 0)
		cout << "Student D will accept decision!" << endl;
	//якщо кількість була непарною, то відхиляємо рішення
	else
		cout << "Student D will decline decision!" << endl;
	return 0;
}