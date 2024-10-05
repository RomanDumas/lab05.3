#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double S(double a);
int fact(int f);

int main() {

	double r_p, r_k, dr, s, result, r;
	cout << "r_p = ";cin >> r_p;
	cout << "r_k = ";cin >> r_k;
	cout << "dr = ";cin >> dr;
	cout << "---------------------" << endl
		<< "|" << setw(5) << "r" << "  |"
		<< setw(8) << "result" << "   |" << endl
		<< "---------------------" << endl;
	r = r_p;
	while (r <= r_k) {
		s = S(r);
		result = (s * (sqrt(r_p) + 1)) - (pow(s, 2) * ((sqrt(r_p) - 1))) + 1;
		cout << "|" << setw(5) << r << "  |"
			<< setw(8) << result << "   |" << endl;
		r += dr;
	}
	cout << "---------------------" << endl;


}

double S(double a) {
	int i = 0;
	int k = 1;
	double S1, a1, S2, a2, s;
	S1 = 0;
	S2 = 0;
	if (abs(a) >= 1) {
		s = (1 + pow(a, 2) + sqrt(abs(sin(a)))) / ((pow(sin(2 * a * a), 2)) + 1);

		return s;
	}

	else {
		while (i <= 5) {
			a1 = (pow(a, i)) / fact(i);
			S1 += a1;
		}
		while (k <= 6) {
			a2 = (pow(a, k)) / fact(k);
			S2 += a2;
		}
	}
	s = S1 + S2;
	return s;


}

int fact(int f) {				//factorial function
	if (f == 1 || f == 0)
		return 1;
	else
		return f * fact(f - 1);
}
