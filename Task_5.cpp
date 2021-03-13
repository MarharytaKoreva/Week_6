#include <iostream>
using namespace std;

int main()
{
	//перелік рівнів
	enum LEVELS { BEGINNER, INTERMIDIATE, ADVANCED, EXIT };
	int level=0;
	//результат введений користувачем, істинна
	int userResult, trueResult;
	//кількість питань у кожному рівні
	const int questionsBeginner = 6, questionsIntermidiate = 9, questionsAdvanced = 12;
	//оновлення рандому
	srand(unsigned(time(0)));
	//два числа
	int numberOne, numberTwo;
	//кількість вірних відповідей
	int correctAnswersCount;
	//поки не вийдемо із меню
	while (level != LEVELS::EXIT)
	{
		//очищаємо попередні дані
		system("cls");
		//меню
		cout << "Check your knowledge of mmult table!\nWe prepare three levers for you:\n[0]Beginners (from 1 to 3). Count of questions: " << questionsBeginner << "\n[1]Intermiate (from 4 to 6) Count of questions: " << questionsIntermidiate << "\n[2]Advanced (from 7 to 9) Count of questions: " << questionsAdvanced << "\n[3]Exit"<<endl;
		cout << "Enter your level: ";
		//рівень
		cin >> level;
		switch (level)
		{
			//рівень початківець
			case LEVELS::BEGINNER:
				//вірних відповідей поки нуль
				correctAnswersCount = 0;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46)<<endl;
				cout << "Your choice is BEGINNER LEVEL" << endl;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << endl;
				//створюємо питання
				for (int i = 1; i <= questionsBeginner; ++i)
				{
					//генеруємо числа від одного до трьох
					numberOne = 1+ rand() % 3;
					numberTwo = 1 + rand() % 9;
					//множимо два числа
					trueResult = numberOne * numberTwo;
					//користувач вводить свій варіант
					cout << numberOne << "*" << numberTwo << "=";
					cin >> userResult;
					//якщо результати спіпадають
					if (userResult == trueResult)
					{
						cout << "Correct!" << endl;
						++correctAnswersCount;
					}
					//якщо не співпадають
					else
						cout << "Wrong!" << endl;
				}
				//виводимо кількість вірних питань
				cout << "You have answered all " << questionsBeginner << " questions. You result is: " << correctAnswersCount << "/" << questionsBeginner << endl;
				//оцінюємо рівень
				if (correctAnswersCount >= 5)
					cout << "Excellent work!" << endl;
				else if (correctAnswersCount >= 3 && correctAnswersCount < 5)
					cout << "Good work! But learn more" << endl;
				else
					cout << "Bad work. You need more practise!" << endl;
				system("pause");
				break;
			//рівень Середній
			case LEVELS::INTERMIDIATE:
				correctAnswersCount = 0;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << endl;

				cout << "Your choice is INTERMEDIATE LEVEL" << endl;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << endl;

				for (int i = 1; i <= questionsIntermidiate; ++i)
				{
					//числа від 4 до шести
					numberOne = 4 + rand() % 3;
					numberTwo = 1 + rand() % 9;
					trueResult = numberOne * numberTwo;
					cout << numberOne << "*" << numberTwo << "=";
					cin >> userResult;
					if (userResult == trueResult)
					{
						cout << "Correct!" << endl;
						++correctAnswersCount;
					}
					else
						cout << "Wrong!" << endl;
				}
				cout << "You have answered all " << questionsIntermidiate << " questions. You result is: " << correctAnswersCount << "/" << questionsIntermidiate << endl;
				if (correctAnswersCount >= 7)
					cout << "Excellent work!" << endl;
				else if (correctAnswersCount >= 4 && correctAnswersCount < 7)
					cout << "Good work! But learn more" << endl;
				else
					cout << "Bad work. You need more practise!" << endl;
				system("pause");
				break;
			//рівень Важкий
			case LEVELS::ADVANCED:
				correctAnswersCount = 0;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << endl;
				cout << "Your choice is ADVANCED LEVEL" << endl;
				cout << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << char(46) << endl;
			
				for (int i = 1; i <= questionsAdvanced; ++i)
				{
					//числа від 7 до 9
					numberOne = 7 + rand() % 3;
					numberTwo = 1 + rand() % 9;
					trueResult = numberOne * numberTwo;
					cout << numberOne << "*" << numberTwo << "=";
					cin >> userResult;
					if (userResult == trueResult)
					{
						cout << "Correct!" << endl;
						++correctAnswersCount;
					}
					else
						cout << "Wrong!" << endl;
				}
				cout << "You have answered all " << questionsAdvanced << " questions. You result is: " << correctAnswersCount << "/" << questionsAdvanced << endl;
				if (correctAnswersCount >= 10)
					cout << "Excellent work!" << endl;
				else if (correctAnswersCount >= 6 && correctAnswersCount < 9)
					cout << "Good work! But learn more" << endl;
				else
					cout << "Bad work. You need more practise!" << endl;
				system("pause");
				break;
			//вихід
			case LEVELS::EXIT:
				cout << "Exit! BYE." << endl;
				break;
			default:
				cout << "You entered wrong data! Try again!" << endl;
				system("pause");
				break;
			system("cls");
		}
	}
	return 0;
}