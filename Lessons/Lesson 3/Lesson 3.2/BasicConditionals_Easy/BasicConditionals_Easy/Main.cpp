#include <iostream>

using namespace std;

class Easy
{
public:
	/**** Find if a triangle can be formed with user-inputed numbers (can be of any numerical type)
	* Valid triangles:	180 = sum(a, b, c)
	****/
	void basicValidTriangle()
	{
		int a;
		int b;
		int c;
		int sum;

		cout << "**BasicValidTriangle()**" << endl;

		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;
		cout << "C:	";
		cin >> c;

		sum = a + b + c;

		/** If the sum of the 3 sides is equal to 180, the triangle is valid
		* Else, the triangle is not valid
		**/
		if (sum == 180)
		{
			cout << a << ", " << b << ", " << c << " make a valid triangle" << endl;
		}
		else
		{
			cout << a << ", " << b << ", " << c << " do not make a valid triangle" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find whether the user-inputed number is even or odd (could be of any numerical type) ****/
	void basicOddEven()
	{
		int x;
		double mod;

		cout << "**BasicOddEven()**" << endl;

		cout << "Enter a number:	";
		cin >> x;

		mod = x % 2;

		/** If the remainder is 0, then x is an even number
		* Else, x is an odd number
		**/
		if (mod == 0)
		{
			cout << x << " is an even number" << endl;
		}
		else
		{
			cout << x << " is an odd number" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find if the user-inputed character is a vowel or consonant ****/
	void basicVowelConsonant()
	{
		char c;

		cout << "**BasicVowelConsonant()**" << endl;

		cout << "Enter a character:	";
		cin >> c;

		if ((c == 'a' || c == 'A') || (c == 'e' || c == 'E') || (c == 'i' || c == 'I') || (c == 'o' || c == 'O') || (c == 'u' || c == 'U'))
		{
			cout << c << " is a vowel" << endl;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			cout << c << " is a consonant" << endl;
		}
		else
		{
			cout << "Invalid alphabetical character" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find the largest of the 3 user-inputed numbers (can be of any type) ****/
	void basicLargestOf3()
	{
		int a;
		int b;
		int c;

		cout << "**BasicLargestOf3()**" << endl;

		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;
		cout << "C:	";
		cin >> c;

		/** If a is greater than b, then check if a is greater than c, then a is the largest number
		* Else if b is greater than c, b is the largest number
		* Else, c is the largest number
		**/
		if (a > b)
		{
			if (a > c)
			{
				cout << a << " is the largest number" << endl;
			}
		}
		else if (b > c)
		{
			cout << b << " is the largest number" << endl;
		}
		else
		{
			cout << c << " is the largest number" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
};

int main()
{
	Easy easy;

	easy.basicValidTriangle();
	easy.basicOddEven();
	easy.basicVowelConsonant();
	easy.basicLargestOf3();

	return 0;
}