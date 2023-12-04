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

