#include <iostream>
#include <string>

using namespace std;

class Medium
{
public:
	/**** Find the Upper and Lower Limits of Primitive Data Types (include both signed and unsigned)
	* Types of primitive data types:
	* int		char		short		long		long long
	****/
	void basicUpperLowerLimits()
	{
		cout << "**BasicUpperLowerLimits()**" << endl;

		cout << "Max int:                  " << INT_MAX << endl;
		cout << "Min int:                  " << INT_MIN << endl;
		cout << "Max unsigned int:         " << UINT_MAX << endl;
		cout << "Max long long:            " << LLONG_MAX << endl;
		cout << "Min long long:            " << LLONG_MIN << endl;
		cout << "Max unsigned long long:   " << ULLONG_MAX << endl;
		cout << "Char bits:                " << CHAR_BIT << endl;
		cout << "Max char:                 " << CHAR_MAX << endl;
		cout << "Min char:                 " << CHAR_MIN << endl;
		cout << "Max signed char:          " << SCHAR_MAX << endl;
		cout << "Min signed char:          " << SCHAR_MIN << endl;
		cout << "Max unsigned char:        " << UCHAR_MAX << endl;
		cout << "Max short:                " << SHRT_MAX << endl;
		cout << "Min short:                " << SHRT_MIN << endl;
		cout << "Max unsigned short:       " << USHRT_MAX << endl;

		cout << "---------------------------\n\n";
	}
	/**** Swap 2, user-defined numbers (could be of any numerical type) ****/
	void basicSwap()
	{
		// initialize the values
		int a;
		int b;
		int temp;

		cout << "**BasicSwap()**" << endl;

		// read the values in
		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;

		// swap values
		temp = b;
		b = a;
		a = temp;
		cout << "1st ordered value:	" << a << endl;
		cout << "2nd ordered value:	" << b << endl;

		cout << "---------------------------\n\n";
	}
	/**** Convert miles to kilometers (up to 2 decimal places)
	* 1 mi = 1.60934 km
	****/
	void basicMiles2Kilometers()
	{
		// initialize the values
		double a;
		double b;

		cout << "**BasicMiles2Kilometers()**" << endl;

		// read the values in
		cout << "Miles:			";
		cin >> a;

		// convert miles to kilometers
		b = a * 1.60934;
		cout << "Kilometers:		" << b << endl;

		cout << "---------------------------\n\n";
	}
	/**** Find the 3rd angle of a Triangle (could be any numerical type)
	* angle3 = 180 - (angle1 + angle2)
	****/
	void basic3rdAngleTriangle()
	{
		// initialize the values
		float a;
		float b;
		float c;

		cout << "**Basic3rdAngleTriangle()**" << endl;

		// read in the values
		cout << "Angle 1:	" << endl;
		cin >> a;
		cout << "Angle 2:	" << endl;
		cin >> b;

		// find missing angle
		c = 180 - (a + b);
		cout << "Angle 3:	" << c << endl;

		cout << "---------------------------\n\n";
	}
	/**** Find the ASCII/Unicode code for a given character ****/
	void basicCharacterCode()
	{
		// initialize the value
		char c;

		cout << "**BasicCharacterCode()**" << endl;

		// read in the value
		cout << "Character:		" << endl;
		cin >> c;

		// find ASCII/Unicode code
		cout << "ASCII code:	  " << (int)c << endl;
		cout << "Character at " << (int)c << ": " << (char)((int)c) << endl;

		cout << "---------------------------\n\n";
	}
};

int main()
{
	Medium medium;

	medium.basicUpperLowerLimits();
	medium.basicSwap();
	medium.basicMiles2Kilometers();
	medium.basic3rdAngleTriangle();
	medium.basicCharacterCode();

	return 0;
}