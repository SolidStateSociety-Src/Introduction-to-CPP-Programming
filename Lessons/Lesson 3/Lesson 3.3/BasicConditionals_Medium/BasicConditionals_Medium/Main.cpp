#include <iostream>

using namespace std;

class Medium
{
public:
	/**** Create a basic calculator, taking in a user-inputed operation and 2 user-inputed numbers (can be any numerical value) ****/
	void basicCalculator()
	{
		char operand;
		float num1, num2;

		cout << "**BasicCalculator()**" << endl;

		cout << "Enter an operator (+, -, *, /): ";
		cin >> operand;
		cout << "Enter two operands: " << endl;
		cin >> num1 >> num2;

		/** Checks which operands to use **/
		switch(operand)
		{
			case '+':
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
				break;
			case '-':
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
				break;
			case '*':
				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
				break;
			case '/':
				cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
				break;
			default:
				cout << "Invalid operator character" << endl;
				break;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find if a triangle is scalene, isosceles, or equilateral ****/
	void basicTriangleType()
	{
		int a;
		int b;
		int c;

		cout << "**BasicTriangleType()**" << endl;

		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;
		cout << "C:	";
		cin >> c;

		/** If all sides are equal to each other, it's an equilateral triangle
		* Else if only 2 side are equal, it's an isosceles
		* Else, it's a scalene
		**/
		if (a == b && b == c)
		{
			cout << "This is an equilateral triangle" << endl;
		}
		else if (a == b || a == c || b == c)
		{
			cout << "This is an isosceles triangle" << endl;
		}
		else
		{
			cout << "This is a scalene triangle" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find if the user-inputed number is a leap year ****/
	void basicLeapYear()
	{
		int x;

		cout << "**BasicLeapYear()**" << endl;

		cout << "Enter number:	";
		cin >> x;

		if ((x % 400) == 0)
		{
			cout << x << " is a leap year" << endl;
		}
		else if ((x % 100) == 0)
		{
			cout << x << " is not a leap year" << endl;
		}
		else if ((x % 4) == 0)
		{
			cout << x << " is a leap year" << endl;
		}
		else
		{
			cout << x << " is not a leap year" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find the absolute value of the user-inputed number (could be of any type) ****/
	void basicAbsoluteValue()
	{
		int x;

		cout << "**BasicAbsoluteValue()**" << endl;

		cout << "Enter number:	";
		cin >> x;

		/** If the number is negative, multiply by a negative number **/
		if (x < 0)
		{
			x *= -1;
		}

		cout << "| " << x << " | = " << x << endl;

		cout << "--------------------------------------- \n\n";
	}
};

int main()
{
	Medium medium;

	medium.basicCalculator();
	medium.basicTriangleType();
	medium.basicLeapYear();
	medium.basicAbsoluteValue();

	return 0;
}
