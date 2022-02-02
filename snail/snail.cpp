#include<iostream>

using namespace std;

int main() {

	int A, B, V;
	int temp;
	int count ;
	cin >> A >> B >> V;
	
	temp = V - A;
	if (temp % (A - B) == 0)
		count = temp / (A - B) + 1;
	else if (temp % (A - B) != 0)
		count = temp / (A - B) + 2;

	cout << count;
	
	
	return 0;
}