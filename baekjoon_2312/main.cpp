#include <iostream>
using namespace std;

int main()
{
	int c, i1, j;
	int num_count = 0;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> i1;
		j = 2;
		while (true) {
			if (i1%j == 0) {
				num_count++;
				i1 /= j;
				continue;
			}
			else if (num_count != 0) {
				cout << j << " " << num_count << endl;
				num_count = 0;
				if (i1 == 1) break;
			}
			j++;
		}
	}
}