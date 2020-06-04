#include <iostream>
#include <string>

using namespace std;

class BasicArrays 
{
public:
	/***** Methods for all the arrays *****/

	/**** For showing basic array declarations ****/
	void basicArrays()
	{
		/** ways to declare size of array **/

		/* while most languages fill in 0s automatically, C and C++ don't, so
		 * add a "{0}"/"{ }" to initialize all 0s in the array when declaring
		*/
		int arr1[10] = {0};
		/* since since isn't declared, you can just keep adding values
		 * however, when you call arr2 later, the size will be how many vars declared
		 * in this example, size = 3
		*/
		double arr2[] = {0.5, 3454, 32};
		/* even though the size is 6 and garbage values/nothing will fill in the rest,
		 * there's still 4 more spaces to add whatever string value you want
		*/
		string arr3[6] = {"howdy", "cosine"};

		arr1[2] = 5;
		// same as arr1[4]
		arr1[8 / 2] = 7;
		// whatever is at arr[4] will be equal to this index
		arr1[5] = arr1[4];

		cout << "**BasicArrays()**" << endl;

		cout << "*Arr1* \n";
		cout << "1st index:		" << arr1[0] << endl;
		cout << "2nd index:		" << arr1[1] << endl;
		cout << "3rd index:		" << arr1[2] << endl;
		cout << "4th index:		" << arr1[3] << endl;
		cout << "5th index:		" << arr1[4] << endl;
		cout << "6th index:		" << arr1[5] << endl;
		cout << "7th index:		" << arr1[6] << endl;
		cout << "8th index:		" << arr1[7] << endl;
		cout << "9th index:		" << arr1[8] << endl;
		cout << "10th index:		" << arr1[9] << endl << endl;

		cout << "*Arr2* \n";
		cout << arr2[0] << "\t\t" << arr2[1] << "\t\t" << arr2[2] << endl << endl;

		arr3[4] = "4346 tbs of ass";

		cout << "*Arr3* \n";
		cout << arr3[4] << endl;

		cout << "--------------------------------------- \n\n";
	}

	/**** For showing basic multidimensional array declarations ****/
	void basicMultidimensional()
	{
		/** you can declare as many dimensions as you'd like, but it gets hard
		 * to visualize, so if you're going to do so, have a good reason
		 * 
		 * I'll only show a 2D and 3D array
		**/

		/** 2D array **/
		// 3 * 4 = 12 elements allotted
		char arr1[3][4] =
		{
			{'a', 'b', 'c', 'd'},		// row 0, indices [0, ..]
			{'e', 'f', 'g', 'h'},		// row 1, indices [1, ..]
			{'i', 'j', 'k', 'l'}		// row 2, indices [2, ..]
		};

		cout << "**BasicMultidimensional()**" << endl;

		cout << "*Arr1* \n";
		cout << "1st row:	" << arr1[0][0] << " " << arr1[0][1] << " " << arr1[0][2] <<
			" " << arr1[0][3] << endl;
		cout << "2nd row:	" << arr1[1][0] << " " << arr1[1][1] << " " << arr1[1][2] <<
			" " << arr1[1][3] << endl;
		cout << "3rd row:	" << arr1[2][0] << " " << arr1[2][1] << " " << arr1[2][2] <<
			" " << arr1[2][3] << endl << endl;

		/** 3D array **/
		// 2 * 3 * 2 = 12 elements allotted
		int arr2[2][3][2] =
		{
			{
				{0, 1}, {2, 3}, {4, 5}
			},
			{
				{6, 7}, {8, 9}, {10, 11}
			}
		};

		cout << "*Arr2* \n";
		cout << "1st row:	" << arr2[0][0][0] << " " << arr2[0][0][1] << " " <<
			arr2[0][1][0] << " " << arr2[0][1][1] << " " << arr2[0][2][0] << " " <<
			arr2[0][2][1] << " " << arr2[1][0][0] << " " << arr2[1][0][1] << " " <<
			arr2[1][1][0] << " " << arr2[1][1][1] << " " << arr2[1][2][0] << " " <<
			arr2[1][2][1] << endl;

		cout << "--------------------------------------- \n\n";
	}
};

int main()
{
	BasicArrays bArr;

	bArr.basicArrays();
	bArr.basicMultidimensional();

	return 0;
}