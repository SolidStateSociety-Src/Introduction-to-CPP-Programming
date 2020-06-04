#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Hard
{
public:
	/**** Find the Area of a Polygon with equal sides (could be of any numerical type) ****/
	void basicPolygonArea() 
	{
		/* we will be including 'math.h' to make life easier */
		// initialize the values
		double a;
		double b;
		double c;

		cout << "**BasicPolygonArea()**" << endl;

		// read the values in
		cout << "Number of sides:	";
		cin >> a;
		cout << "Side length:		";
		cin >> b;

		// find area
		c = (a * (b * b)) / (4.0 * tan((3.14 / a)));
		cout << "Area:		" << c;

		cout << "---------------------------\n\n";
	}
	/**** Replace the Lower-case letters of a String with Upper-case ****/
	void basicLower2UpperCase()
	{
		/* we will be including 'algorithm' to make this easier */
		// initialze the value
		string str;

		cout << "**BasicLower2UpperCase()**" << endl;

		// read in the value
		cout << "Phrase:		" << endl;
		getline(cin, str);

		// replace lower-case to upper-case
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << "Capitalized:	" << str << endl;
	}
	/**** Swap the value of 2, user-defined variables without using a 3rd variable (could be of any numerical type) ****/
	void basicSwap()
	{
		// initialize the values
		int a;
		int b;

		cout << "**BasicSwap()**" << endl;

		// read the values in
		cout << "A =	";
		cin >> a;
		cout << "B =	";
		cin >> b;

		// swap the values without the use of a 3rd variable
		b = b + a;
		a = b - a;
		b = b - a;
		cout << "1st ordered value:		" << a << endl;
		cout << "2nd ordered value:		" << b << endl;

		cout << "---------------------------\n\n";
	}
};

int main()
{
	Hard hard;

	hard.basicPolygonArea();
	hard.basicLower2UpperCase();
	hard.basicSwap();


	return 0;
}