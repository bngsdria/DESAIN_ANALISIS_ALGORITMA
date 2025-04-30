#include <iostream>
#include <string>
using namespace std;

class pelajaran {		// Class Name
	public:				// Access specifier
		pelajaran () {	// Constructor
			cout << "Ini adalah materi C++ tentang Constructors!";
	}
	
};

	int main () {
		pelajaran obj; // membuat object dari sebuah class
	
	return 0;
}
