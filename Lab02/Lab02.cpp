#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Harini and I'm going to solve the equation:\n";
	cout << "Ax + B =0\n";
	cout << "For x\n\n";
	cout << "Please enter a value for A: ";
	cin >> A; 
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "\n\nSolving " << A << "x+" << B << "=0 for x...\n\n" << endl;
	X = (0 - B) / A;
	cout << "The answer is:\n";
	cout << "x=" << X << endl;
}