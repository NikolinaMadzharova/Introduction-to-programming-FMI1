#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool one = a <= c && c <= b;
	bool two = c <= a && a <= d;

	cout << (one || two);
	//cout(!(b<c || d<a));

}

