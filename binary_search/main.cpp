#include <iostream>
#include <vector>
#include "binary_search.h"

using namespace std;

int main()
{
	vector<int> example = { 2, 3, 5, 6, 89 };
	cout << "Enter the number: ";
	int test = 0;
	cin >> test;

	cout << "You were looking for: " << test << "\t Found: " << binary_search(example, test) << endl;

}