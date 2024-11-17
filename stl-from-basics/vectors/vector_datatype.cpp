#include <iostream>
#include <vector>

using namespace std;

void getVectorInfo(vector<int> v){

	cout << "[=====[vector elements]=====]\n";
	for (int element : v){
		cout << element << " "; 	
	}
	cout << "\n[=====[================]=====]\n";
};

int main()
{
	vector<int> vector1 = {1, 3, 4};
	
	// priniting the elements
	cout << vector1[0] << endl;
	
	// operations - u can;t push from the front directly!
	vector1.push_back(5); // 4
	vector1.push_back(6); // 5
	vector1.push_back(7); // 6
	vector1.push_back(8); // 7
	vector1.push_back(9); // 8

	// print all the elements 

	getVectorInfo(vector1);

	vector1.pop_back();
	vector1.pop_back();
	vector1.pop_back();

	getVectorInfo(vector1);

	vector1.shrink_to_fit();

	cout << "Capacity is > " << vector1.capacity() << endl;
	cout << "Now the size is > " << vector1.size() << endl;
}