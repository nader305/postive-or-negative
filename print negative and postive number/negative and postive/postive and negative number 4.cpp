#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter number:\n";
	cin >> num;
	cout << "============\n";
	if (num > 0)
		cout << num << " is postive\n";
	else if (num == 0)
		cout << "num is " << num << endl;
	else
		cout << num << " is negative\n";
	return 0;
}