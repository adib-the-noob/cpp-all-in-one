#include <iostream>
#include <vector>

using namespace std;

// handling dynamic data type using Template func
template <typename T>
void getVectorInfo(vector<T> provided_vector){
	for (const T& element: provided_vector){
		cout << element << endl;
	}
}


void vectorBasics(){
	vector<int> vec1;
	vec1.push_back(1);
	vec1.push_back(2);

	getVectorInfo(vec1);

	vector<string> str_vector;
	str_vector.push_back("KireMama!");
	str_vector.push_back("hacker!");

	getVectorInfo(str_vector);

	// pair in a vector

	vector<pair<int, int>> pair_vec;

	pair_vec.push_back({0, 200});
	pair_vec.push_back({1, 500});

	cout << "\n==================\n";

	// already decleard value for a particular vector
	vector<int> filled_vec(5, 100);
	getVectorInfo(filled_vec);

	// passing and exsisitng vector to a new vector
	cout << "\n==================\n";

	vector<int> ready_made_vec(5, 30);
	vector<int> containing_vector(ready_made_vec);
	getVectorInfo(containing_vector);

}


void vectorIterator(){
	vector<int> vector1(5, 40);
	vector<int>::iterator it = vector1.begin();

	it++;
	cout << *(it) <<  " ";
}


int main()
{
	// vectorBasics();
	vectorIterator();
}

