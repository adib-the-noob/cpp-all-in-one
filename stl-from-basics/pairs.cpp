#include <iostream>
using namespace std;

void pairSimpleExplaination()
{
	// A single pair

	pair<int, int> sample_pair = {1, 3};
	cout << "=== {1, 3}===" << endl;
	cout << "Here is those -> " << sample_pair.first << " " << sample_pair.second << endl; 

	// A pair inside a pair 
	pair<int, pair<int, int>> sample_pair2 = {2, {5, 6}};
	cout << "=== {2, {5, 6}}===" << endl;
	
	cout << sample_pair2.first << endl;
	cout << sample_pair2.second.first << endl;
	cout << sample_pair2.second.second << endl;

	
	// A list of pairs
	pair<int, int> sample_array[] = {{1, 2}, {5, 6}, {7, 8}};

	cout << "======================"<< endl;
	cout << sample_array[0].first << endl;
	cout << sample_array[0].second << endl;

	cout << "-----" << endl;
	cout << sample_array[2].first << endl;
	cout << sample_array[2].second << endl;
}

int main()
{
	pairSimpleExplaination();
}

