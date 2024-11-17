#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector1 = {1, 3, 4};

	
	// priniting the elements
	cout << vector1[0] << endl;
	
	cout << "======================" << endl;

	// operations - u can;t push from the front directly!
	vector1.push_back(5); // 4
	vector1.push_back(6); // 5
	vector1.push_back(7); // 6
	vector1.push_back(8); // 7
	vector1.push_back(9); // 8

	// print all the elements 
	for (int element : vector1){
		cout << element << " "; 
	}

	cout << "\n======================" << endl;
	cout << "Capacity is > " << vector1.capacity() << endl;
	cout << "Now the size is > " << vector1.size() << endl;
}