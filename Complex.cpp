#include <iostream>
#include <cmath>
using namespace std;


struct complex_number {
		double real;
		double comp;

	complex_number () {
		
	}

	complex_number (double val_0, double val_1) {
		real = val_0;
		comp = val_1;
	}

	bool operator>(complex_number val2) {
		double e = 0.001;
		if (real > val2.real) {
			return true;

		} else if (real < val2.real) {
			return false;

		} else if (comp > val2.comp) {
			return true;
		
		} else {

			return false;
		}
	}

	bool operator==(complex_number val) {
		double e = 0.001;
		if ((fabs(real - val.real) < e) && (fabs(comp - val.comp)) < e) {
			return true;
		} else {
			return false;
		}

	}

	friend std::ostream& operator<< (std::ostream &out, const complex_number &number) {
		out << "Real(" << number.real << "), Complex(" << number.comp << "i)";
		return out;
	}

	friend std::string to_string(complex_number const& number) {
		return "Real(" + to_string(number.real) + "), Complex(" + to_string(number.comp) + "i)";
	}

	~complex_number() {

	}

};
