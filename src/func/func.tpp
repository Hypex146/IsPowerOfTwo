#include <concepts>
#include <cmath>


#define N 100


bool isPowerOfTwoA(std::integral auto a) {
	return (a > 0) && !(a & (a - 1));
}


bool isPowerOfTwoB(std::integral auto a) {
	return (a > 0) && ((a & -a) == a);
}


bool isPowerOfTwoC(std::integral auto a) {
	double lg = log2(a);
	if (lg == (int) lg) {
		return true;
	}
	return false;
}


int powerOfTwoA(std::integral auto a) {
	uint64_t current_number = 0;
	for (int power = 0; current_number <= a && power <= N; power++) {
		current_number = pow(2, power);
		if (current_number == a) {
			return power;
		}
	}
	return -1;
}


int powerOfTwoB(std::integral auto a) {
	int power = 0;
	double tmp = a;
	while (tmp > 1 && power < N) {
		if (tmp / 2 == (uint64_t) tmp / 2) {
			tmp = (uint64_t) tmp / 2;
			power++;
		} else {
			return -1;
		}
	}
	if (tmp == 1) {
		return power;
	}
	return -1;
}


int powerOfTwoC(std::integral auto a) {
	double lg = log2(a);
	if (lg == (int) lg && lg <= N) {
		return lg;
	}
	return -1;
}
