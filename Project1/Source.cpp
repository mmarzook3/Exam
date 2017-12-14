#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{

	/*cout << "argc: " << argc << endl;
	cout */

	double sum = 0, avarage, input;
	int count = 0;
	do
	{
		cout << "Enter " << count + 1 << " floating point number | press Ctrl + Z to end inputting " <<endl;
		cin >> input;
		sum += input;
		count++;

	} while (count < 20 && !cin.fail());

	if (cin.fail())
	{
		sum -= input;
	}
	

	avarage = sum / count;

	cout << " Sum is : " << sum << " | Avarage is : " << avarage << endl;

	system("PAUSE");
	return 0;
}