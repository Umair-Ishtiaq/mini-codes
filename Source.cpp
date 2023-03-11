#include<iostream>
using namespace std;
int main()
{
	int opt = 0, opt2 = 0, num1 = 0, num2 = 0, res = 0;
	do
	{
		cout << "Enter number 1 : ";
		cin >> num1;
		cout << "Enter number 2 : ";
		cin >> num2;
		system("cls");

		cout << "Select operation (1-4):\n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Divide\n";
		cin >> opt;
		system("cls");

		if (opt == 1)
		{
			res = num1 + num2;
			cout <<"Result of " << num1 << "+" << num2 << " = " << res;
		}
		else if (opt == 2)
		{
			res = num1 - num2;
			cout << "Result of " << num1 << "-" << num2 << " = " << res;
		}
		else if (opt == 3)
		{
			res = num1 * num2;
			cout << "Result of " << num1 << "*" << num2 << " = " << res;
		}
		else if (opt == 4)
		{
			res = num1 / num2;
			cout << "Result of " << num1 << "/" << num2 << " = " << res;
		}
		cout << "\npress 1 for more calculations or any key to exit\n";
		cin >> opt2;
		system("cls");

	} while (opt == 1);
}
