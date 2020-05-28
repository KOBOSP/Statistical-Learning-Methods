#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SVMCPP/SVM.h"
#include "../SVMCPP/modelbase.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			//Base* obj = new SVM();
			//obj->run();
			int a = 2;
			Assert::AreEqual(2, a);
		}
		TEST_METHOD(TestMethod2) {
			// TODO: 在此输入测试代码
			SVM* obj = new SVM();
			Assert::AreEqual(2, obj->testt);
		}

	};
}