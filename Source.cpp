#include<iostream>
using namespace std;
void swap(int &num1, int &num2,int *ptrA,int *ptrB)
{
	 ptrA = &num2;
	 ptrB = &num1;
}
int main()
{
	int a, b;
	int* ptrA = &b, *ptrB =& a;

	cout <<"please enter the first number\n";
	cin >> a;
	cout << "please enter the second number\n";
	cin >> b;
	swap(a, b);
	cout << "the first number is "<< *ptrB <<" and the second number is "<< *ptrA <<endl;
	system("pause");
	return 0;
}