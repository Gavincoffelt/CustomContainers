#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector <int> intvector;
	for (int i = 0; i < 10; i++) {
		intvector.push_back(i);
	}
	cout << intvector.size() << endl;
	cout << "Size:" << intvector.size() << endl;
	for (int i = 0; i < intvector.size(); i++) {
		cout << "Vector Contains:" << intvector.at(i) << endl;
	}

		

	
	return 0;
}