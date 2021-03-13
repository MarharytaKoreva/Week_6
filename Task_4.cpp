#include <iostream>
using namespace std;

int main()
{
	int randNumber, userNumber;
	srand(unsigned(time(0)));
	randNumber = 1 + rand() % 100;
	int countOfAttempts;
	cout << "Enter count of attempts to find digit: ";
	cin >> countOfAttempts;
	int usedAttempt = 1;
	while (usedAttempt <= countOfAttempts)
	{
		cout << "Enter your number: ";
		cin >> userNumber;
		if (userNumber > randNumber)
			cout << "My number is less than " << userNumber << endl;
		else if (userNumber < randNumber)
			cout << "My number is greater than " << userNumber << endl;
		else if (userNumber == randNumber)
		{
			cout << "You find my number! It was: " << randNumber << " . Congragulations!" << endl;
			break;
		}
		if (userNumber != randNumber && usedAttempt == countOfAttempts)
		{
			cout << "You lose! Try again later!" << endl;
			cout << "Want to play again?\n[0]No;\t[1]Yes\n";
			int choice;
			cout << "Enter your choice: ";
			cin >> choice;
			enum MENU { NO, YES };
			switch (choice)
			{
			case MENU::NO:
				cout << "Bye! Hope to see you soon!" << endl;
				break;
			case MENU::YES:
				system("cls");
				cout << "Welcome back!" << endl;
				usedAttempt = 0;
				break;
			default:
				cout << "Wrong action chosen!" << endl;
				break;
			}
		}
		++usedAttempt;
	}
	return 0;
}