# Lab 20: Find The Middle

In this lab, we will devise and implement an algorithm for locating the middle element in a singly linked list. If the list has an even number of elements, the middle is "rounded up" to the next highest element. For example:

* {1, 2, 3}: `getMiddle()` returns 2
* {1, 2, 3, 4}: `getMiddle()` returns 3

Without consideration of time and space constraints, the middle can be found easily. For example, you could:

* Change the list ADT to keep a running count of the list size, or
* Copy the elements to a vector and ask the vector for its size, or
* Walk to the end of the list while recording the number of steps you take, then divide by two.

Instead, to make the problem more interesting, we will assume these additional constraints:

* No other information is available besides the head of the list.
* The algorithm must have `O(1)` space complexity.
* The algorithm must perform no more than `n/2` operations.

Once you have devised the algorithm, implement it in the `getMiddle` method and make sure all unit tests pass.
