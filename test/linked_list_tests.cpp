#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "linked_list.h"

using namespace std;

TEST_CASE("The middle of an even-numbered linked list can be found")
{
	SLinkedList<int> list;
	list.addFront(1);
	list.addFront(2);
    REQUIRE(list.getMiddle() == 1);
	list.addFront(3);
	list.addFront(4);
    REQUIRE(list.getMiddle() == 2);
}

TEST_CASE("The middle of an odd-numbered linked list can be found")
{
	SLinkedList<int> list;
	list.addFront(1);
    REQUIRE(list.getMiddle() == 1);
	list.addFront(2);
	list.addFront(3);
    REQUIRE(list.getMiddle() == 2);
	list.addFront(4);
	list.addFront(5);
    REQUIRE(list.getMiddle() == 3);
}

TEST_CASE("Finding the middle of an empty linked list throws an exception")
{
	SLinkedList<int> list;
    REQUIRE_THROWS(list.getMiddle());
}
