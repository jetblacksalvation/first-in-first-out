#pragma once
#include <iostream>
namespace data {

	//linked list init
	class linkedlist {
	public:
		linkedlist(std::initializer_list<int> list);
		~linkedlist();
		int operator [](int index);
		std::initializer_list<int> returnlist();
		int getfirst();
		int getlast();
	private:
		int* node_array;//an array
		int size;
		int first;
		int last;
	};
};