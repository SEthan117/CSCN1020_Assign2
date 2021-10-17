#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int *length, int *width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShapeUnitTest
{
	TEST_CLASS(RECTANGLE_LENGTH_AREA_TEST)
	{
	public:
		
		TEST_METHOD(AreaEquation_Multiply2Ints)
		{
			//Find area of rectangle with length of 10 and width of 45
			int area=0;
			int *length;
			int *width;
			int value1;
			int value2;
			length = &value1;   //Set pointer to an integer
			width = &value2;
			value1 = 10;		//Give integer a value
			value2 = 45;
			area = getArea(length,width);
			Assert::AreEqual(450,area);
		}

		TEST_METHOD(PerimeterEquation_Add2Ints)
		{
			//Find perimeter of rectangle with length of 25 and width of 60
			int perimeter = 0;
			int* length;
			int* width;
			int value1;
			int value2;
			length = &value1;	//Set pointer to an integer
			width = &value2;
			value1 = 25;		//Give integer a value
			value2 = 60;
			perimeter = getPerimeter(length,width);
			Assert::AreEqual(170, perimeter);
		}

		TEST_METHOD(LengthRunByFunction_RunLengthTest1)
		{
			//Assure that input is being put through function, using a value of 121 to assure test is passed
			int input = 121;//Give input in function a value
			int* length;
			int truelength;
			length = &truelength;
			setLength(input, length);
			Assert::AreNotEqual(truelength, input); //Make sure input and output from function are not equal
		}

		TEST_METHOD(LengthRunByFunction_RunLengthTest2)
		{
			//Assure that input is being put through function, using a value of 99 to assure test is passed
			int input=99;//Give input in function a value
			int* length;
			int truelength;
			length = &truelength;
			setLength(input, length);
			Assert::AreEqual(truelength, input); //Make sure input and output from function are not equal
		}
		

		TEST_METHOD(LengthRunByFunction_RunLengthTest3)
		{
			//Assure that input is being put through function, using a value of -25 to assure test is passed
			int input = -25;//Give input in function a value
			int* length;
			int truelength;
			length = &truelength;//Set pointer to integer
			setLength(input, length);
			Assert::AreNotEqual(truelength, input); //Make sure input and output from function are not equal
		}

		TEST_METHOD(WidthRunByFunction_RunWidthTest1)
		{
			//Assure that input is being put through function, using a value of 56 to assure test is passed
			int input = 56; //Give input in function a value
			int* width;
			int truewidth;
			width = &truewidth; //Set pointer to integer
			setWidth(input, width);
			Assert::AreEqual(truewidth, input); //Make sure input and output from function are equal
		}

		TEST_METHOD(WidthRunByFunction_RunWidthTest2)
		{
			//Assure that input is being put through function, using a value of 122 to assure test is passed
			int input = 122;//Give input in function a value
			int* width;
			int truewidth;
			width = &truewidth;//Set pointer to integer
			setWidth(input, width);
			Assert::AreNotEqual(truewidth, input); //Make sure input and output from function are not equal
		}

		TEST_METHOD(WidthRunByFunction_RunWidthTest3)
		{
			//Assure that input is being put through function, using a value of -67 to assure test is passed
			int input = -67;//Give input in function a value
			int* width;
			int truewidth;
			width = &truewidth;//Set pointer to integer
			setWidth(input, width);
			Assert::AreNotEqual(truewidth, input); //Make sure input and output from function are not equal
		}
	};
}
