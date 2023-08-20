#include <vector>
#include "binary_search.h"

using namespace std;

int binary_search(vector<int> data, int element)
{
	int low = 0, high = data.size(), item, steps = 0;

	while (high >= low)
	{
		int middle = (low + high) / 2;
		
		item = data[middle];

		if (element == item)
		{
			return element;
		}
		else if (element < item)
		{
			high = middle - 1;
		}
		else
		{
			low = middle + 1;
		}
	}

	return NULL;
}