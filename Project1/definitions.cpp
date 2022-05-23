#include "Header.h"
//constructors----------------------------

data::linkedlist::linkedlist(std::initializer_list<int> list) {
	size = list.size();

	int temp = 0;
	
	node_array = (int*)malloc(size * sizeof(int));
	for (auto elem : list) {
		node_array[temp] = elem;
		temp++;
	};
	//defines first and last;
	first = node_array[0] ;
	last = node_array[temp-1];
	
};
data::linkedlist::~linkedlist() {
	//brh  
}
//return values functions-----------------------------------
std::initializer_list<int> data::linkedlist::returnlist() {

	std::initializer_list<int> templist = { *node_array
	};
	return templist;
};

int data::linkedlist::getfirst() {
	return first;
}

int data::linkedlist::getlast() {
	return last;
}

//OPerator overloades ---------------------------
int data::linkedlist::operator[](int index) {
	if (index >= size) {
		exit(139);
	};
	return node_array[index];
};