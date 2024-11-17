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
	vector<int> vector1 = {1, 2, 3, 4};
	getVectorInfo(vector1);

	vector1.insert(vector1.begin(), 5);
	getVectorInfo(vector1);

	vector1.insert(vector1.begin() + 1, 6);
	getVectorInfo(vector1);

	// the beginning

	vector1.erase(vector1.begin()); // 5 will be removed!
	getVectorInfo(vector1);
}
