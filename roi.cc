#include <iostream>
using namespace std;
int main()
{
	int n = 3;
	int m = 3;
	int arr[][3]
		= { { 3, 2, 7 }, { 2, 6, 8 }, { 5, 1, 9 } };
	int sum = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			sum += arr[i][j];
		}
	}
	cout << sum << endl;
	return 0;
}
 