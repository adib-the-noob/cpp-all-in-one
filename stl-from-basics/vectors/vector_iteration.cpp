#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> sample_vector = {1, 3, 5, 6};

	// simple for loop
	for (int i = 0; i < sample_vector.size(); i++)
	{
		cout << sample_vector[i] << endl;
	}

	cout << "=============================" << endl;

	for (auto itr = sample_vector.begin(); itr != sample_vector.end(); itr++){
		cout << *itr << endl;
	}

	cout << "=============================" << endl;

}