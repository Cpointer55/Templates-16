// Matthew Mondi
// CIS 1202
// 12/4/23

#include<iostream>

using namespace std;

template <typename M>

	M half (M Number) {


	M divided;

	divided = Number / 2;

	if (*typeid(Number).name() == 'I') {

		if (divided * 2 != Number) {

			divided++;
		}

	}
	return divided;

}

	int main() {

		double a = 13.4;
		float b = 6.0f;
		int c = 5;

		cout << half(a) << endl;
		cout << half(b) << endl;
		cout << half(c) << endl;





	}

