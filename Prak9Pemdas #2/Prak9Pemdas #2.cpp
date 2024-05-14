#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Defenisi Function*/}
	static int getNim(){ return nim; /*Defenisi Function*/}

	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 193;




int main()
{
	
}
