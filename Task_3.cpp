#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//break
	char symbolBreak;
	bool isAInArray = 0;
	cout << "Break" << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter your symbol: ";
		cin >> symbolBreak;
		symbolBreak == 'a' ? isAInArray = true : isAInArray = isAInArray;
		if (symbolBreak == '.')
			break;
	}
	cout << "Is 'a' was in array? : " << boolalpha << isAInArray << endl<<endl;
	cout << "Not break" << endl;
	//not break
	char symbolNoBreak = '1';
	isAInArray = 0;
	char breakChar = char(46);
	for (int i = 1; i<10 && symbolNoBreak != breakChar; ++i)
	{
		cout << "Enter your symbol: ";
		cin >> symbolNoBreak;
		symbolNoBreak == 'a' ? isAInArray = true : isAInArray = isAInArray;
	}
	cout << "Is 'a' was in array? : " << boolalpha << isAInArray << endl;
	return 0;
}