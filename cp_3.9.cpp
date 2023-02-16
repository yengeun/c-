#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;

	if (x > 2)
	{
		if (y > 2)
		{
			int z = x + y;
			cout << "z is " << z << endl;
		}
	}
	else
		cout << "x is " << x << endl;
}