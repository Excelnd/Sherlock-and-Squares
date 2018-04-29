// Sherlock and Squares.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int t, a, b, count;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int res = ceil(sqrt(a));
		count = 0;
		while (res * res <= b) {
			count++;
			res++;
		}
		cout << count << endl;
	}

    return 0;
}

