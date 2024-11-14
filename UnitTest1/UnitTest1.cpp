#include "pch.h"
#include "CppUnitTest.h"
#include "../PDS_15/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
	public:
        TEST_METHOD(TestPrintSolution) {
            std::stringstream buffer;
            std::streambuf* original = std::cout.rdbuf(buffer.rdbuf());

            int n = 4;
            position[0] = 0;
            position[1] = 2;
            position[2] = 1;
            position[3] = 3;

            printSolution(n);

            std::string expected = "Q . . . \n. . Q . \n. Q . . \n. . . Q \n\n";
            Assert::AreEqual(expected, buffer.str());

            std::cout.rdbuf(original);
        }
	};
}
