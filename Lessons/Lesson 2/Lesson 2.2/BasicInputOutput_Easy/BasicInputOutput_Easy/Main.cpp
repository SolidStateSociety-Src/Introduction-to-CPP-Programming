#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

class Easy
{
public:
	/**** Find the Sum of 3, user-defined variables (could be of any numerical type) ****/
	void basicSum()
	{
		/* initialize the variables to be used
		* don't need to set to 0, since we're receiving input and telling the program what the sum's definition below
		* but setting them to 0 is a good habit to get into for math, lest there be any screw ups
		*/
		int a;
		int b;
		int c ;
		int sum;

		cout << "**BasicSum()**"<< endl;

		// read in values
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;

		// find sum
		sum = a + b + c;
		cout << "Sum =	" << sum << endl;

		cout << "-------------------------\n\n";
	}
	/**** Find the Perimeter and Area of a Triangle, with the input being user-defined (could be of any numerical type)
	* Perimeter = side1 + side2 + side3
	* for area, assume perimeter has been halved
	* Area = sqrt(perimeter * (perimeter - side1) * perimeter * (perimeter - side2) * perimeter * (perimeter - side3))
	****/
	void basicPerimeterArea()
	{
		/* to make life simple, we'll be including the 'math.h' */
		double a;
		double b;
		double c;
		double perimeter;
		double area;

		cout << "**BasicPerimeterArea()**" << endl;

		// read in values
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;

		// find perimeter
		perimeter = a + b + c;
		cout << "Perimeter:	" << perimeter << endl;

		// find area (knowing all 3 sides)
		perimeter /= 2;
		area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
		cout << "Area:	" << area << endl;

		cout << "-------------------------\n\n";
	}
	/**** Find the Average of 3, user-defined numbers (could be of any numerical type)
	* Average = (sum of all values) / (number of all values)
	****/
	void basicAverage()
	{
		/* for best practices, we should be using a variable to determine the number of all values
		* but since there's a discrete number of 3, we'll just put that in as is
		*/
		/* also if VS decides to be pissy and throw errors of "using uninitialized memory",
		* try either setting your variables to 0 when you declare them or put {} next to the variable name (same as 0s)
		*/
		float a;
		float b;
		float c;
		float average;

		cout << "**BasicAverage()**" << endl;

		// read in values
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;

		// find average
		average = (a + b + c) / 3;
		cout << "Average:	" << average << endl;

		cout << "-------------------------\n\n";
	}
	/**** Input a user-defined phrase and Output it in reverse ****/
	void basicBackwardsOutput()
	{
		string str;

		cout << "**BasicBackwardsOutput()**" << endl;

		// reads in value
		cout << "Phrase:	" << endl;
		getline(cin, str);

		// reverses value
		reverse(str.begin(), str.end());
		cout << "Reversed:	" << str << endl;

		cout << "-------------------------\n\n";
	}
	/**** Find the size (in bytes) of Primitive Data Types
	* Types of primitive data types:
	* char		int		long		float		double		bool
	* long long			long double				short
	****/
	void basicSizeOf()
	{
		cout << "**BasicSizeOf()**" << endl;

		cout << "Char:          " << sizeof(char) << " bytes \n";
		cout << "Short:         " << sizeof(short) << " bytes \n";
		cout << "Int:           " << sizeof(int) << " bytes \n";
		cout << "Long:          " << sizeof(long) << " bytes \n";
		cout << "Long long:     " << sizeof(long long) << " bytes \n";
		cout << "Float:         " << sizeof(float) << " bytes \n";
		cout << "Double:        " << sizeof(double) << " bytes \n";
		cout << "Long double:   " << sizeof(long double) << " bytes \n";
		cout << "Bool:          " << sizeof(bool) << " bytes \n";
	}
};

int main()
{
	Easy easy;

	easy.basicSum();
	easy.basicPerimeterArea();
	easy.basicAverage();
	easy.basicBackwardsOutput();
	easy.basicSizeOf();

	return 0;
}