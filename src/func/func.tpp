#include <concepts>
#include <cmath>


#define N 100


bool ipot::isPowerOfTwoA(std::integral auto number) {
	return (number > 0) && !(number & (number - 1));
}


bool ipot::isPowerOfTwoB(std::integral auto number) {
	return (number > 0) && ((number & -number) == number);
}


bool ipot::isPowerOfTwoC(std::integral auto number) {
	double power = log2(number);
	if (power == (int) power) {
		return true;
	}
	return false;
}


int ipot::powerOfTwoA(std::integral auto number) {
	uint64_t iterated_number = 0;
	for (int power = 0; iterated_number <= number && power <= N; power++) {
		iterated_number = pow(2, power);
		if (iterated_number == number) {
			return power;
		}
	}
	return -1;
}


int ipot::powerOfTwoB(std::integral auto number) {
	int power = 0;
	double div_number = number;
	while (div_number > 1 && power < N) {
		if (div_number / 2 == (uint64_t) div_number / 2) {
			div_number = (uint64_t) div_number / 2;
			power++;
		} else {
			return -1;
		}
	}
	if (div_number == 1) {
		return power;
	}
	return -1;
}


int ipot::powerOfTwoC(std::integral auto number) {
	double power = log2(number);
	if (power == (int) power && power <= N) {
		return power;
	}
	return -1;
}
