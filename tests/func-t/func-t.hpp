#pragma once


#include <stdlib.h>
#include <time.h>
#include "func.hpp"


using namespace ipot;


TEST(IPOTA, INT8_T) {
	EXPECT_EQ(isPowerOfTwoA<int8_t>(0), false);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoA<int8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoA<int8_t>(num + addition), false);
	}
}


TEST(IPOTA, UINT8_T) {
	EXPECT_EQ(isPowerOfTwoA<uint8_t>(0), false);
	for (int i = 0; i < sizeof(uint8_t) * 8; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoA<uint8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 1)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoA<uint8_t>(num + addition), false);
	}
}


TEST(IPOTA, INT64_T) {
	EXPECT_EQ(isPowerOfTwoA<int64_t>(0), false);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << i << " : " << num << std::endl;
		EXPECT_EQ(isPowerOfTwoA<int64_t>((int64_t)num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoA<int64_t>(num + addition), false);
	}
}


TEST(IPOTA, UINT64_T) {
	EXPECT_EQ(isPowerOfTwoA<uint64_t>(0), false);
	for (int i = 0; i < sizeof(uint64_t) * 8; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoA<uint64_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 1)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoA<uint64_t>(num + addition), false);
	}
}


TEST(IPOTB, INT8_T) {
	EXPECT_EQ(isPowerOfTwoB<int8_t>(0), false);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoB<int8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoB<int8_t>(num + addition), false);
	}
}


TEST(IPOTB, UINT8_T) {
	EXPECT_EQ(isPowerOfTwoB<uint8_t>(0), false);
	for (int i = 0; i < sizeof(uint8_t) * 8; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoB<uint8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 1)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoB<uint8_t>(num + addition), false);
	}
}


TEST(IPOTB, INT64_T) {
	EXPECT_EQ(isPowerOfTwoB<int64_t>(0), false);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << i << " : " << num << std::endl;
		EXPECT_EQ(isPowerOfTwoB<int64_t>((int64_t)num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoB<int64_t>(num + addition), false);
	}
}


TEST(IPOTB, UINT64_T) {
	EXPECT_EQ(isPowerOfTwoB<uint64_t>(0), false);
	for (int i = 0; i < sizeof(uint64_t) * 8; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoB<uint64_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 1)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoB<uint64_t>(num + addition), false);
	}
}


TEST(IPOTC, INT8_T) {
	EXPECT_EQ(isPowerOfTwoC<int8_t>(0), false);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoC<int8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoC<int8_t>(num + addition), false);
	}
}


TEST(IPOTC, UINT8_T) {
	EXPECT_EQ(isPowerOfTwoC<uint8_t>(0), false);
	for (int i = 0; i < sizeof(uint8_t) * 8; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoC<uint8_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 1)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoC<uint8_t>(num + addition), false);
	}
}


TEST(IPOTC, INT64_T) {
	EXPECT_EQ(isPowerOfTwoC<int64_t>(0), false);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << i << " : " << num << std::endl;
		EXPECT_EQ(isPowerOfTwoC<int64_t>((int64_t)num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoC<int64_t>(num + addition), false);
	}
}


TEST(IPOTC, UINT64_T) {
	EXPECT_EQ(isPowerOfTwoC<uint64_t>(0), false);
	for (int i = 0; i < sizeof(uint64_t) * 8; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(isPowerOfTwoC<uint64_t>(num), true);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 1)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(isPowerOfTwoC<uint64_t>(num + addition), false);
	}
}


TEST(POTA, INT8_T) {
	EXPECT_EQ(powerOfTwoA<int8_t>(0), -1);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoA<int8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoA<int8_t>(num + addition), -1);
	}
}


TEST(POTA, UINT8_T) {
	EXPECT_EQ(powerOfTwoA<uint8_t>(0), -1);
	for (int i = 0; i < sizeof(uint8_t) * 8 - 1; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoA<uint8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 2)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoA<uint8_t>(num + addition), -1);
	}
}


TEST(POTA, INT64_T) {
	EXPECT_EQ(powerOfTwoA<int64_t>(0), -1);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << (int64_t) num << " : " << i << std::endl;
		EXPECT_EQ(powerOfTwoA<int64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoA<int64_t>(num + addition), -1);
	}
}


TEST(POTA, UINT64_T) {
	EXPECT_EQ(powerOfTwoA<uint64_t>(0), -1);
	for (int i = 0; i < sizeof(uint64_t) * 8 - 1; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoA<uint64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 2)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoA<uint64_t>(num + addition), -1);
	}
}


TEST(POTB, INT8_T) {
	EXPECT_EQ(powerOfTwoB<int8_t>(0), -1);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoB<int8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoB<int8_t>(num + addition), -1);
	}
}


TEST(POTB, UINT8_T) {
	EXPECT_EQ(powerOfTwoB<uint8_t>(0), -1);
	for (int i = 0; i < sizeof(uint8_t) * 8 - 1; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoB<uint8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 2)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoB<uint8_t>(num + addition), -1);
	}
}


TEST(POTB, INT64_T) {
	EXPECT_EQ(powerOfTwoB<int64_t>(0), -1);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << (int64_t) num << " : " << i << std::endl;
		EXPECT_EQ(powerOfTwoB<int64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoB<int64_t>(num + addition), -1);
	}
}


TEST(POTB, UINT64_T) {
	EXPECT_EQ(powerOfTwoB<uint64_t>(0), -1);
	for (int i = 0; i < sizeof(uint64_t) * 8 - 1; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoB<uint64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 2)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoB<uint64_t>(num + addition), -1);
	}
}


TEST(POTC, INT8_T) {
	EXPECT_EQ(powerOfTwoC<int8_t>(0), -1);
	for (int i = 0; i < sizeof(int8_t) * 8 - 1; i++) {
		int8_t num = ((int8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoC<int8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int8_t power = (std::rand() % (sizeof(int8_t) * 8 - 2)) + 1;
		int8_t num = ((int8_t) 1) << power;
		int8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoC<int8_t>(num + addition), -1);
	}
}


TEST(POTC, UINT8_T) {
	EXPECT_EQ(powerOfTwoC<uint8_t>(0), -1);
	for (int i = 0; i < sizeof(uint8_t) * 8 - 1; i++) {
		uint8_t num = ((uint8_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoC<uint8_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint8_t power = (std::rand() % (sizeof(uint8_t) * 8 - 2)) + 1;
		uint8_t num = ((uint8_t) 1) << power;
		uint8_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoC<uint8_t>(num + addition), -1);
	}
}


TEST(POTC, INT64_T) {
	EXPECT_EQ(powerOfTwoC<int64_t>(0), -1);
	for (int i = 0; i < sizeof(int64_t) * 8 - 1; i++) {
		int64_t num = ((int64_t) 1) << i;
		//std::cout << (int64_t) num << " : " << i << std::endl;
		EXPECT_EQ(powerOfTwoC<int64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		int64_t power = (std::rand() % (sizeof(int64_t) * 8 - 2)) + 1;
		int64_t num = ((int64_t) 1) << power;
		int64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoC<int64_t>(num + addition), -1);
	}
}


TEST(POTC, UINT64_T) {
	EXPECT_EQ(powerOfTwoC<uint64_t>(0), -1);
	for (int i = 0; i < sizeof(uint64_t) * 8 - 1; i++) {
		uint64_t num = ((uint64_t) 1) << i;
		//std::cout << (int) num << std::endl;
		EXPECT_EQ(powerOfTwoC<uint64_t>(num), i);
	}
	srand(time(NULL));
	int iter_c = 1000;
	for (int i = 0; i < iter_c; i++) {
		uint64_t power = (std::rand() % (sizeof(uint64_t) * 8 - 2)) + 1;
		uint64_t num = ((uint64_t) 1) << power;
		uint64_t addition = (std::rand() % (num - 1)) + 1;
		//std::cout << (int) num + addition << std::endl;
		EXPECT_EQ(powerOfTwoC<uint64_t>(num + addition), -1);
	}
}
