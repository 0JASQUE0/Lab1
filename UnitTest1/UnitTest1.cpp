#include "pch.h"
#include "CppUnitTest.h"
#include <D:\Прога 3 сем лабы\Лаба 1\Лаба 1\LinkedList.h>
#include <D:\Прога 3 сем лабы\Лаба 1\Лаба 1\LinkedList.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(push_back)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			Assert::IsTrue(lst->at(0) == 0);
			Assert::IsTrue(lst->at(1) == 1);
		}

		TEST_METHOD(push_front)
		{
			LinkedList* lst = new LinkedList;
			lst->push_front(4);
			lst->push_front(5);
			Assert::IsTrue(lst->at(0) == 5);
			Assert::IsTrue(lst->at(1) == 4);
		}

		TEST_METHOD(pop_back_front)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->pop_front();
			lst->pop_back();
			Assert::IsTrue(lst->at(0) == 4);
			Assert::IsTrue(lst->at(3) == 2);
		}

		TEST_METHOD(insert1)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->insert(10, 3);
			Assert::IsTrue(lst->at(3) == 10);
		}

		TEST_METHOD(insert2)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->insert(10, 0);
			Assert::IsTrue(lst->at(0) == 10);
		}

		TEST_METHOD(insert3)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->insert(10, 5);
			Assert::IsTrue(lst->at(5) == 10);
		}

		TEST_METHOD(remove1)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->remove(0);
			Assert::IsTrue(lst->at(0) == 4);
		}

		TEST_METHOD(remove2)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->remove(3);
			Assert::IsTrue(lst->at(3) == 2);
		}

		TEST_METHOD(clear)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->clear();
			Assert::IsTrue(lst->get_size() == 0);
		}

		TEST_METHOD(set)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->set(3, 10);
			Assert::IsTrue(lst->at(3) == 10);
		}

		TEST_METHOD(isEmpty)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			Assert::IsTrue(!lst->isEmpty());
		}

		TEST_METHOD(reverse)
		{
			LinkedList* lst = new LinkedList;
			lst->push_back(0);
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			lst->push_front(4);
			lst->push_front(5);
			lst->reverse();
			Assert::IsTrue(lst->at(0) == 3);
		}
	};
}
