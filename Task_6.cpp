#include <iostream>
using namespace std;

int main()
{
	//перелік меню
	enum PRODUCTS  { TOY, CANDY, TREE, LIGHTS, TOTAL_FOR_CURRENT_CLIENT, NEXT_CUSTOMER, SHIFT_END };
	//оголошуємо вибір меню, кількість товару, суму за один товар, знижку, вартість знижки, наявність знижки, суму за одну покупку, суму за всі покупки 
	int product=0, quantity, sumForOneProduct;
	double discount, discountValue, hasDiscount;
	double sumOfOnePurchase = 0, sumOfAllPurchases = 0;
	//оголошуємо ціну товарів
	double priceToy = 19.99, priceCandy = 10.00, priceTree = 99.99, priceLights = 15.99;
	cout << "Welcome to our Christmas store!" << endl;
	//доки не вибрано вихід
	while (product != 6)
	{
		//виділяємо початок кожної роботи
		for (int i = 1; i < 40; ++i)
		{
			cout << char(46);
		}
		cout << endl;
		//виводимо меню
		cout << "Choose one of item:\n[0]Toy (Price= " << priceToy << " $)\n[1]Candy (Price = " << priceCandy << " $)\n[2]Tree (Price = " << priceTree << " $)\n[3]Lights (Price = " << priceLights << " $\n[4]Total for currect client\n[5]Next customer\n[6]Total for this day and close the shifts" << endl;
		cout << "You choice: ";
		cin >> product;
		switch (product)
		{
			//обираємо меню = 0
			case PRODUCTS::TOY:
				//кількість
				cout << "Enter quantity: ";
				cin >> quantity;
				//якщо кількість менша рівна нулю просимо ввести ще раз
				if (quantity <= 0)
				{
					cout << "You entered wrong data! Try again!" << endl;
					cout << "Enter quantity: ";
					cin >> quantity;
				}
				//рахуємо суму за товар
				sumForOneProduct = priceToy * quantity;
				//додаємо до суми покупки
				sumOfOnePurchase += sumForOneProduct;
				cout << "Total sum for this product: " << sumForOneProduct << "$" << endl;
				cout << "Total sum of purchase: " << sumOfOnePurchase << "$" << endl;
				system("pause");
				break;
			//меню = 1
			case PRODUCTS::CANDY:
				cout << "Enter quantity: ";
				cin >> quantity;
				if (quantity <= 0)
				{
					cout << "You entered wrong data! Try again!" << endl;
					cout << "Enter quantity: ";
					cin >> quantity;
				}
				sumForOneProduct = priceCandy * quantity;
				sumOfOnePurchase += sumForOneProduct;
				cout << "Total sum for this product: " << sumForOneProduct << "$" << endl;
				cout << "Total sum of purchase: " << sumOfOnePurchase << "$" << endl;
				system("pause");
				break;
			//меню = 2
			case PRODUCTS::TREE:
				cout << "Enter quantity: ";
				cin >> quantity;
				if (quantity <= 0)
				{
					cout << "You entered wrong data! Try again!" << endl;
					cout << "Enter quantity: ";
					cin >> quantity;
				}
				sumForOneProduct = priceTree * quantity;
				sumOfOnePurchase += sumForOneProduct;
				cout << "Total sum for this product: " << sumForOneProduct << "$" << endl;
				cout << "Total sum of purchase: " << sumOfOnePurchase << "$" << endl;
				system("pause");
				break;
			//меню = 3
			case PRODUCTS::LIGHTS:
				cout << "Enter quantity: ";
				cin >> quantity;
				if (quantity <= 0)
				{
					cout << "You entered wrong data! Try again!" << endl;
					cout << "Enter quantity: ";
					cin >> quantity;
				}
				sumForOneProduct = priceLights * quantity;
				sumOfOnePurchase += sumForOneProduct;
				cout << "Total sum for this product: " << sumForOneProduct <<"$"<<endl;
				cout << "Total sum of purchase: " << sumOfOnePurchase << "$" << endl;
				system("pause");
				break;
			//меню = 4
			case PRODUCTS::TOTAL_FOR_CURRENT_CLIENT:
				//запитуємо чи клієнт має знижку
				cout << "Do customer has discount? [0]No; [1]Yes : ";
				cin >> hasDiscount;
				//якщо невірно ввели - пробуємо ще раз
				if (hasDiscount != 0 && hasDiscount != 1)
				{
					cout << "You entered wrong data! Try again!" << endl;
					cout << "Do customer has discount? [0]No; [1]Yes : ";
					cin >> hasDiscount;
				}
				//якщо є знижка
				else if (hasDiscount == 1)
				{
					//вводимо значення знижки
					cout << "Enter discount value: ";
					cin >> discount;
					//якщо ввели не вірно - пробуємо ще раз
					if (discount <= 0 && discount >= 100)
					{
						cout << "You entered wrong data! Try again!" << endl;
						cout << "Enter discount value: ";
						cin >> discount;
					}
					//якщо знижка від 1 до 99 %
					else if (discount > 0 && discount<100)
					{
						//рахуємо яку знижку у доларах отримав клієнт
						discountValue = sumOfOnePurchase * (discount/100);
						//сума покупки клієнта із знижкою
						sumOfOnePurchase -= discountValue;
						cout << "Client has " << discount << " % discount - from his purchase. It's " << discountValue << " $. So total sum of client's purchase is " << sumOfOnePurchase << " $" << endl;
						cout << "Thank you! Good bye" << endl;
					}
					//якщо знову невірно ввели знижку - приймаємо, що знижки немає
					else
					{
						cout << "You entered wrong data. Client has no discount!" << endl;
						cout << "Total sum for client's purchase is "<<sumOfOnePurchase << " $" << endl;
						cout << "Thank you! Good bye" << endl;
					}
				}
				//якщо знижки немає
				else if (hasDiscount == 0)
				{
					cout << "Total sum for client's purchase is "<<sumOfOnePurchase << " $" << endl;
					cout << "Thank you! Good bye" << endl;
				}
				//якщо знову невірно ввели наявність знижки - приймаємо, що знижки немає
				else
				{
					cout << "You entered wrong data. Client has no discount!" << endl;
					cout << "Total sum for client's purchase is " << sumOfOnePurchase << " $" << endl;
					cout << "Thank you! Good bye" << endl;
				}
				//сумуємо вартість покупки
				sumOfAllPurchases += sumOfOnePurchase;
				//суму однієї покупки обнульовуємо
				sumOfOnePurchase = 0;
				system("pause");
				break;
			//меню = 5
			case PRODUCTS::NEXT_CUSTOMER:
				//якщо вибрано наступний покупець без сумування для попереднього покупця
				if (sumOfOnePurchase != 0)
				{
					//просимо завершити із попереднім покупцем
					cout << "Please, first finish with previous clients" << endl;
					continue;
				}
				//новий покупець
				else
				{
					system("cls");
					cout << "New customer!" << endl;
				}
				break;
			//меню = 6
			case PRODUCTS::SHIFT_END:
				//якщо не закінчено покупку попереднім покупцем
				if (sumOfOnePurchase != 0)
				{
					cout << "Please, first finish with previous clients" << endl;
					//щоб повернуло у меню
					product = 0;
					continue;
				}
				//завершуємо зміну
				else
				{
					system("cls");
					cout << "Total sum for purchases for this shift is " << sumOfAllPurchases << " $. Shifts closed. Good bye!" << endl;
					sumOfAllPurchases = 0;
				}
				break;

			default:
				cout << "You entered wrong data! Try again!" << endl;
		}
	}
	return 0;
}