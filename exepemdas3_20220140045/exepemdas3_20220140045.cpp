#include <iostream>
#include <string>
using namespace std;

class penerbit {
public:
	string Namapenerbit;

	penerbit(string pNamapenerbit) :
		Namapenerbit(pNamapenerbit) {
		cout << "penerbit dibuat\n" << endl;
	}
	~penerbit() {
		cout << "penerbit dihapus\n" << endl;
	}

	int jumlah(int a, int b) {
		return a + b;
	}

};

class pengarang : public penerbit {
public:
	string Namapenerbit;

	pengarang(string pNamapengarang, string pNamapenerbit) :
		penerbit(pNamapenerbit),
		Namapenerbit(pNamapengarang) {
		cout << "pengarang dibuat\n" << endl;
	}
	~pengarang() {
		cout << "pengarang dihapus\n" << endl;
	}
};

int main() {
	pengarang nama("giga", "asroni");
	cout << nama.~pengarang();
	
	return 0;
}
