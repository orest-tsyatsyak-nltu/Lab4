#include "Official.h"
#include <fstream>

int main() {
	Official official;

	cout << official << endl << endl;
	cin >> official;
	cout << endl;
	cout << official << endl << endl;

	ofstream fout("result.txt");
	fout << official;
	fout.close();

	return 0;
}