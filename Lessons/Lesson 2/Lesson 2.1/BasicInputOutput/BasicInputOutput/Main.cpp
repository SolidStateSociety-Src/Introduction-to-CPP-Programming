#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class BasicInputOutput
{
public:
	/***** Methods for all the outputs *****/

	/**** For showing basic output ****/
	void basicOutput()
	{
		string hello = "Hello";		// we can print out a variable, we need to #include <string> up top
		string goodbye("Goodbye");	// since strings are their own classes, we can define it like a method

		// when writing for output, but sure to use the key '<<'
		// 'std::' is not needed in front, but it can be helpful
		std::cout << "**BasicOutput()**" << endl;
		std::cout << "Hello" << endl;
		cout << hello << "\n";
		cout << "You can have multiple (" << hello << ") statements in 1 output command, just separate by " << "'<<'." << endl;
		std::cout << goodbye << "\n\n";
		cout << "--------------------------------------- \n\n";
	}
	/**** For showing basic arithmatic ****/
	void basicMath()
	{
		int a;		// a is some variable of integer type that we've declared here, but will give definition later
		int b = 3;	// b is some variable of integer type that we've both declared and defined here
		int c;		// c is some variable of integer type that we will be using to hold the result

		a = 97;		// here, we've defined a, which we can, of course change whenever we want

		// c is set to be the result of a + b
		c = a + b;

		cout << "**BasicMath()**" << endl;

		cout << "Result is:  " << c << endl;

		// '++' means to add 1, '--' means to subtract 1
		cout << "Result +1:  " << c++ << endl;

		// compound statements are the same as saying "var = var + 1", without being redundant
		cout << "Result *= 2:" << c *= 2 << endl;
		
		cout << "--------------------------------------- \n\n";
	}
	/**** For showing basic name printing ****/
	void basicNames()
	{
		string name = "Marin";		// name is some variable of string type that we're using to store name, strings need to be included up top
		int age = 20;				// age is some variable of integer type that we're using to store our age

		cout << "**BasicNames()**" << endl;

		cout << "My name is " << name << " and I'm " << age << endl;

		cout << "--------------------------------------- \n\n";
	}
	/**** For showing basic formatting
	* Namely for line formatting, not so much output formatting, we get to those when we get to those
	****/
	void basicFormatting()
	{
		cout << "**BasicFormatting()**" << endl;

		// as you saw above, you can jump to the next line by using '\n', but you can use multiple formats at the same time
		cout << "What's happening \n\n";
		// an older method that has its own usage is using '<< endl'
		cout << "How's it going?" << endl;
		// you can also tab by using '/t/
		cout << "I'm here \t ... Now I'm here \n";

		cout << "--------------------------------------- \n";
		cout << "--------------------------------------- \n\n";
	}

	/***** Methods for all the inputs *****/

	/**** For showing basic input ****/
	void basicInput()
	{
		int age;		// age is some variable of integer type that we're using to store our age

		cout << "**BasicInput()**" << endl;

		// when writing for input, but sure to use the key '>>'
		// input always need a variable or location to store data
		// you should probably give prompts of some kind
		cout << "How old are you?" << endl;
		cin >> age;
		cout << "So you are:  " << age << ", and here's double your age:  " << age * 2 << endl;

		cout << "--------------------------------------- \n\n";
	}
	/**** For showing special string inputs
	* These are for strings and strings only
	****/
	void basicSpecialStrings()
	{
		string changeStr;		// changeStr is a variable of string type to be used for the getline() method

		/*** getline()
		* because the 'cin' keyword considers non-continous spaces as terminators when extracting the value, we can't say
		* grab a whole line of whatever we want
		* the workaround for strings is to use the 'getline()' method
		* what it does is it takes the 'cin' stream as the 1st arguement (parameter), and the string variable as the 2nd
		* so 'cin' is almost always going to be your 1st arguement
		***/

		cout << "**BasicSpecialStrings()**" << endl;

		cout << "What is your full name:	\n";
		getline(cin, changeStr);
		cout << "Cool, " << changeStr << " so what's your favorite 2 words?:	" << endl;
		getline(cin, changeStr);
		cout << changeStr << "?  I think " << changeStr << " is alright \n\n";

		/*** stringstream()
		* treats the strings like they were streams (cout, cin, etc) for extracting, inserting, etc
		* really useful for converting values
		***/

		string convertStr("1204");
		int convertInt;

		// it's now usable as an integer to us
		stringstream(convertStr) >> convertInt;


		string str;
		float price = 0;
		int quantity = 0;

		cout << "Price:			";
		getline(cin, str);
		stringstream(str) >> price;
		cout << "Quantity:		";
		getline(cin, str);
		stringstream(str) >> quantity;
		cout << "Total price:	" << price * quantity << endl;
	}
};

int main()
{
	BasicInputOutput bio;		// how we're calling the class we threw our stuff into, but you can also just write everything in main() for now

	// how we'll be calling the methods for the class
	/** Output **/
	bio.basicOutput();
	bio.basicMath();
	bio.basicNames();
	bio.basicFormatting();

	/** Input **/
	bio.basicInput();
	bio.basicSpecialStrings();

	return 0;
}
