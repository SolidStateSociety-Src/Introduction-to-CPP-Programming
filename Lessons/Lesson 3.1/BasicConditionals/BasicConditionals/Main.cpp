#include <iostream>
#include <string>

using namespace std;

class BasicConditionals
{
public:
	/***** Methods for all the conditionals *****/

	/**** For showing a basic conditional statement ****/
	void basicIf()
	{
		int x;

		cout << "**BasicIf()**" << endl;

		cout << "Enter a number:	";
		cin >> x;

		/** If x is equal to 100, then print **/
		if (x == 100)
		{
			cout << "x is equal to 100" << endl;
		}
		
		cout << "x is outside the conditional" << endl;

		cout << "--------------------------------------- \n\n";
	}
	/**** For showing a basic if-then-else statement ****/
	void basicIfElse()
	{
		/* Not every if statement needs an else follow up */
		int a;
		int b;

		cout << "**BasicIfElse()**" << endl;

		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;

		/** If a is greater than b, then print
		* Else, then print 
		**/
		if (a > b)
		{
			cout << "A is greater than B" << endl;
		}
		else
		{
			cout << "B is greater than A" << endl;
		}

		cout << "a, b are outside the conditional" << endl;

		cout << "--------------------------------------- \n\n";
	}
	/**** For showing a basic If-Else if statement ****/
	void basicIfElseIf()
	{
		/* While not every if needs an else, an else if statement must end with a regular else somewhere */
		int x;

		cout << "**BasicIfElseIf()**" << endl;

		cout << "Enter a number:	";
		cin >> x;

		if (x > 0)
		{
			cout << x << " is a positive number" << endl;
		}
		else if (x < 0)
		{
			cout << x << " is a negative number" << endl;
		}
		else
		{
			cout << x << " is neither positive nor negative" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** For showing a basic switch conditional ****/
	void basicSwitch()
	{
		/* All switches can be written as if statements, and the reverse is also true
		* Switches also require a break at some point of the blocks
		* Default cases aren't necessary, but they're helpful
		*/
		int day;

		cout << "**BasicSwitch()**" << endl;

		cout << "Enter a day (using a number):	";
		cin >> day;

		switch(day)
		{
			case 1:
				cout << "Monday" << endl;
				break;
			case 2:
				cout << "Tuesday" << endl;
				break;
			case 3:
				cout << "Wednesday" << endl;
				break;
			case 4:
				cout << "Thursday" << endl;
				break;
			case 5:
				cout << "Friday" << endl;
				break;
			case 6:
				cout << "Saturday" << endl;
				break;
			case 7:
				cout << "Sunday" << endl;
				break;
			default:
				cout << "Invalid date" << endl;
				break;
		}

		cout << "--------------------------------------- \n\n";
	}
};

int main()
{
	BasicConditionals bc;

	bc.basicIf();
	bc.basicIfElse();
	bc.basicIfElseIf();
	bc.basicSwitch();

	return 0;
}