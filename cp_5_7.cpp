#include <iostream>
using namespace std;

int main()
{
	int number, max;
	cin >> number;
	max = number;

	do
	{
		cin >> number;
		if (number > max)
			max = number;
	} while (number != 0);

	cout << "max is " << max << endl;
	cout << "number " << number << endl;

	return 0;
}