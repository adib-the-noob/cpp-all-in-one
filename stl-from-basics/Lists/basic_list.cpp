#include <iostream>
#include <list>

using namespace std;


void explainList();

int main()
{
	explainList();
}



void explainList(){
	list<int> myList;

	myList.push_back(2); // {2}
	myList.emplace_back(3); // {2, 3}
	myList.push_front(5); // {5, 2, 3}

	for (auto element: myList){
		cout << element << " ";
	}
}