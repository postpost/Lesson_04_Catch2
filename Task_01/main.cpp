#include <iostream>
#include "List.hpp"
#include "ListNode.hpp"


int main() 
{
	List* list = new List;
	std::cout << std::boolalpha << list->Empty() << std::endl;
	list->PushBack(10);
	list->PushBack(14);
	list->PushBack(-5);
	list->PushBack(3);
	list->PushBack(9);
	std::cout << std::boolalpha << list->Empty()<<std::endl;

	list->Clear();
	std::cout << std::boolalpha << list->Empty()<<std::endl;
	
	return 0;
}