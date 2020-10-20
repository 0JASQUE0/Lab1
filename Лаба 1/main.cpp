#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	LinkedList lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_front(5);
	lst.push_front(6);

	lst.print_to_console();
	cout << endl << endl;

	lst.pop_back();
	lst.pop_front();

	lst.print_to_console();
	cout << endl << endl;

	lst.insert(25, 0);

	lst.print_to_console();
	cout << endl << endl;

	cout << lst.at(0) << endl << endl;

	lst.remove(0);

	lst.print_to_console();
	cout << endl << endl;

	cout << lst.get_size() << endl << endl;

	lst.set(0, 10);
	lst.print_to_console();
	cout << endl << endl;

	bool empty = lst.isEmpty();
	cout << empty << endl << endl;

	lst.reverse();
	lst.print_to_console();
	cout << endl << endl;

	lst.clear();
	empty = lst.isEmpty();
	cout << empty << endl << endl;

	lst.push_front(5);
	lst.push_front(6);
	lst.print_to_console();
	cout << endl << endl;

	return 0;
}