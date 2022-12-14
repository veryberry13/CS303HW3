#include <iostream> 
#include <queue> 
#include "MoveToRear.h"
using namespace std;


int main()
{
	//Declaring queue
	std::queue<int> test_que;
	
	//Adding elements into queue
	test_que.push(1);

	test_que.push(2);

	test_que.push(3);



	/*Printing queue before calling move_to_rear function*/
	std::cout << "before calling the move_to_rear function" << std::endl;
	std::cout << test_que.front() << std::endl;

	/*Printing queue after calling move_to_rear function*/
	std::cout << "After removing front and adding it to rear" << std::endl;
	test_que = move_to_rear(test_que);
	std::cout << test_que.front() << std::endl;

	return 0;
}