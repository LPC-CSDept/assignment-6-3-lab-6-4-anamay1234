#include <iostream>
using namespace std;

int getSum(int);
int main()
{
	int N;
	int num, result;
	
	cout << "Enter the number of inputs: ";
	cin >> N;
	result = getSum(N);
	cout << "Sum: " << result << endl;
}

int getSum(int N)
{
	int max, min, sum = 0, num, newsum;
	for (int i = 0; i < N; i++) {
		cout << "Enter number of inputs: " << endl;
		cin >> num;
		sum += num;
		

		if (i == 0) {
			min = max = num;
		}

		if (min > num) {
			min = num;
		} else {
			min = min;
		}

		if (max < num) {
			max = num;
		} else {
			max = max;
		}
	}
	newsum = sum - min - max;
	return newsum;
}
