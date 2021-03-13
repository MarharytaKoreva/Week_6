#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	enum MONTHS { JANUARY = 1, FEBRUARY=2, MARCH=3, APRIL=4, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER=11, DECEMBER };
	int month, daysCountInMonth, year;
	int weekendCount = 0;
	//для вирахування високосного року
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter a month number [1-12]: ";
	cin >> month;
	int startWeekDay;
	cout << "Enter a number day of week [1-7] when that month started -> ";
	cin >> startWeekDay;
	cout << "\n\n\t\t";
	switch (month) {
	//місяці із 31 днем
	case MONTHS:: JANUARY:
	case MONTHS:: MARCH:
	case MONTHS:: MAY: 
	case MONTHS::JULY:
	case MONTHS::AUGUST:
	case MONTHS::OCTOBER:
	case MONTHS::DECEMBER:
		daysCountInMonth = 31;
		if (month == 1)
			cout << "\tJanuary" << endl;
		else if (month == 3)
			cout << "\tMarch" << endl;
		else if (month == 5)
			cout << "\tMay" << endl;
		else if (month == 7)
			cout << "\tJuly" << endl;
		else if (month == 8)
			cout << "\tAugust" << endl;
		else if (month == 10)
			cout << "\tOctober" << endl;
		else if (month == 12)
			cout << "\tDecember" << endl;
		break;
	//місяці із 30 днями
	case MONTHS::APRIL: 
	case MONTHS::JUNE:
	case MONTHS::SEPTEMBER :
	case MONTHS::NOVEMBER :
		daysCountInMonth = 30;
		if (month == 4)
			cout << "\tApril" << endl;
		else if (month == 6)
			cout << "\tJune" << endl;
		else if (month == 9)
			cout << "\tSeptember" << endl;
		else if (month == 11)
			cout << "\tNovember" << endl;
		break;
	//лютий, залежно від високосу
	case MONTHS::FEBRUARY:
		if (year % 4 == 0)
		{
			cout << "This year has 366 days" << endl;
			daysCountInMonth = 29;
		}
		else
			daysCountInMonth = 28;
		cout << "\tFebruary" << endl;
		break;
	default:
		cout << "You entered wrong month number!" << endl;
		break;
	}
	cout << "Mo\tTu\tWe\tTh\tFr\tSa\tSu" << endl;
	int emptyValue = 0;
	for (int i = 1; i < startWeekDay; ++i)
	{
		cout << "_\t";
		++emptyValue;
	}
	//кількість "днів"
	int count = emptyValue;
	for (int temp=1; temp <= daysCountInMonth; ++temp)
	{
		++count;
		cout << temp << "\t";
		//новий рядок
		if ((count) % 7 == 0)
			cout << endl;
		//вихідні
		if (count % 6 == 0 || count % 7 == 0)
			++weekendCount;
	}
	//якщо тиждень починався із неділі
	if (emptyValue == 6)
		--weekendCount;
	cout << endl;
	cout << "That month weekends is " << weekendCount << " days" << endl;
	return 0;
}