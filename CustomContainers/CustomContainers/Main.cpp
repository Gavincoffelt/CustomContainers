#include <iostream>
#include "vector.h"

using namespace std;
int main() {
	vectorclass<int> bob;
	bob.resize(10);
	
	cout << bob.size() << endl;
	
	
	return 0;
}