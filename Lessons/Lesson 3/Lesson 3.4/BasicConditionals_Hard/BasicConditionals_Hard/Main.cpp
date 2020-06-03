#include <iostream>
#include <math.h>

using namespace std;

class Hard
{
public:
	/**** Find the roots of 2 user-inputed numbers using the quadratic equation
	* Quadratic:	- (b +- squrt((b^2) - 4ac)) / 2a
	****/
	void basicQuadratic()
	{
		int a;
		int b;
		int c;
		int x;
		float root1;
		float root2;

		cout << "**BasicQuadratic()**" << endl;

		cout << "A:	";
		cin >> a;
		cout << "B:	";
		cin >> b;
		cout << "C:	";
		cin >> c;

		x = (b * b) - (4 * a * c);

		/** If x equals 0, both roots are equal when found
		* Else if x is greater than 0, roots will be both real and imaginary when found
		* Else, both roots will be imaginary when found (no solution for us in this problem)
		**/
		if (x == 0)
		{
			root1 = -b / (2 * a);
			root2 = root1;

			cout << "Both roots are equal" << endl;
			cout << "1st root:	" << root1 << endl;
			cout << "2nd root:	" << root2 << endl;
		}
		else if (x > 0)
		{
			root1 = (-b + sqrt(x)) / (2 * a);
			root2 = (-b - sqrt(x)) / (2 * a);

			cout << "One root is real, one root is imaginary" << endl;
			cout << "1st root:	" << root1 << endl;
			cout << "2nd root:	" << root2 << endl;
		}
		else
		{
			cout << "Both roots are imaginary, no solution" << endl;
		}

		cout << "--------------------------------------- \n\n";
	}
	/**** Find the grade of a user-inputed score using switches ****/
	void basicGrade()
	{
		int score;

		cout << "**BasicGrade()**" << endl;

		cout << "Enter a score:	";
		cin >> score;
		
		/** If the score is between 0 to 100, then proceed with giving a lettered grade **/
		if (score >= 0 && score <= 100)
		{
			/** If the score is within the rungs of 10, then you get a corresponding grade **/
			switch (score / 10)
			{
			case 10:
				cout << score << " = A" << endl;
				break;
			case 9:
				cout << score << " = A" << endl;
				break;
			case 8:
				cout << score << " = B" << endl;
				break;
			case 7:
				cout << score << " = C" << endl;
				break;
			case 6:
				cout << score << " = D" << endl;
				break;
			default:
				cout << score << " = F" << endl;
				break;
			}
		}

		cout << "--------------------------------------- \n\n";
	}
};

int main()
{
	Hard hard;

	hard.basicQuadratic();
	hard.basicGrade();

	return 0;
}