#include<iostream>
using namespace std;
int main()
{

	int a, b,c;
	cout << "please enter the 2 numbers\n";
	cin >> a >> b;
	int* ptrA = &a;
	int* ptrB = &b;
	int* ptrC = &c;
	*ptrC = *ptrA + *ptrB;             //rakezi hena fel satr da w tare2to
	cout << "the sum of the two numbers is " << *ptrC << endl;
	system("pause");
	return 0;
}