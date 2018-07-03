#include <iostream>
#include <unordered_set>

using std::cout;
using std::unordered_set;

//O(n^3)time O(1)space
void tripletsSumZero_1(int arr[], int length)
{
	bool isFound = false;

	for (int i = 0; i < length - 2; i++)
		for (int j = i + 1; j < length - 1; j++)
			for (int k = j + 1; k < length; k++)
				if (arr[i] + arr[j] + arr[k] == 0)
				{
					cout << "{" << arr[i] << "," << arr[j] << "," << arr[k] << "}" << "\n";
					isFound = true;
				}
	if (!isFound)
		cout<<"not exist\n";
}

//O(n^2)time O(n)space
void tripletsSumZero_2(int arr[], int length)
{
	bool isFound = false;

	for (int i = 0; i < length - 1; i++)
	{
		unordered_set<int> myset;

		for (int j = i + 1; j < length; j++)
		{
			int target = -(arr[i] + arr[j]);

			if (myset.find(target) != myset.end())
			{
				cout << "{" << arr[i] << "," << target << "," << arr[j] << "}" << "\n";
				isFound = true;
			}
			else
			{
				myset.insert(arr[j]);
			}
		}
	}
	if (!isFound)
		cout << "not exist\n";
}

int main()
{
	int arr[] = { 0, -1, 2, -3, 1 };
	int length = sizeof(arr) / sizeof(int);
	cout << "1. \n";
	tripletsSumZero_1(arr, length);
	cout << "2. \n";
	tripletsSumZero_2(arr, length);
	return 0;
}
