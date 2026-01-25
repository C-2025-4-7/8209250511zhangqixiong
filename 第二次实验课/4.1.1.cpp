#include <iostream>
using namespace std;
int main()
{
	int numbers[10] = { 0 }, distinct[10] = { 0 };
	cout << "Enter 10 Numbers :";
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}
	cout << "The Distinct Numbers are :";
	for (int i = 0; i < 10; i++)
	{
		bool isDistinct = true;
		for (int j = 0; j < i; j++)
		{
			if (numbers[i] == numbers[j])
			{
				isDistinct = false;
				break;
			}
		}
		if (isDistinct)
		{
			cout << numbers[i] << " ";
		}
	}
	return 0;
}