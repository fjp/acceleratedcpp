#include <algorithm>	// sort
#include <iostream>		// cout, cin, endl
#include <vector>		// vector, begin, end, push_back
#include <string>

using std::sort;

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	// ask for and read numbers:
	cout << "Please enter numbers, "
			"followed by end-of-file: " << endl;
	double number;
	vector<double> numbers;
	while (cin >> number)
		numbers.push_back(number);

	// check that at least one number was entered
	typedef vector<double>::size_type vec_sz;
	vec_sz size = numbers.size();
	if (size == 0) {
		cout << endl << "You must enter at least one number! "
						"Please try again. " << endl;
		return 1;
	}

	// sort the numbers
	sort(numbers.begin(), numbers.end());

	// compute the median
	vec_sz mid = size/2;
	cout << "mid is: " << mid << " and size is: " << size << endl;
	cout << "size % 2 = " << size << " % 2 = " << size % 2 << " and therefore ";
	// output even or odd
	if (size % 2 == 0) {
		cout << "even" << endl;
		cout << "The median is calculated using (numbers[mid] + numbers[mid + 1]) / 2 = ";
	}
	else {
		cout << "odd" << endl;
		cout << "The median is calculated using numbers[mid] = ";
	}
	double median;

	median = size % 2 == 0 	? (numbers[mid] + numbers[mid - 1]) / 2
							: numbers[mid];


	// write the median
	cout << median << endl;

	return 0;
}