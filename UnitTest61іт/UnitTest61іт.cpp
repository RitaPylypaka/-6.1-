#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.1 іт/пр6.1 іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61іт
{
	TEST_CLASS(UnitTest61іт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m = 8;
			int n[m] = { -10,-8,-3,1,8,14,18,19};
			int epxS = 0;
			int k = 0;
			for (int i = 0; i < m; i++) {
				if ((n[i] < 0) && (!(n[i] % 3 == 0))) {
					epxS += n[i];
					k++;
				}
			}
			int s = Sum(n, m, k);
			Assert::AreEqual(s, epxS);
		}
	};
}
