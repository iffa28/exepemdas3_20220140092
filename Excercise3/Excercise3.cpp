#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Penerbit {
public:
	string nmPenerbit;
};

class Pengarang {
public:
	string nmPengarang;
	vector<string> bukuDikarang;
	Penerbit* penerbit;
};

class Buku {
public:
	string judulBuku;
	Pengarang* pengarang;
};

int main() {
	Penerbit gamaPress;
	gamaPress.nmPenerbit = "Gama Press";

	Penerbit intanPariwara;
	intanPariwara.nmPenerbit = "Intan Pariwara";

	Pengarang joko;
	joko.nmPengarang = "Joko";
	joko.penerbit = &gamaPress;

	Pengarang lia;
	lia.nmPengarang = "lia";
	lia.penerbit = &gamaPress;

	Pengarang giga;
	giga.nmPengarang = "Giga";
	giga.penerbit = &gamaPress;

	Pengarang asroni;
	asroni.nmPengarang = "Asroni\nGiga";
	asroni.penerbit = &intanPariwara;

	Buku fisika;
	fisika.judulBuku = "Fisika";
	fisika.pengarang = &joko;
	joko.bukuDikarang.push_back(fisika.judulBuku);

	Buku algoritma;
	algoritma.judulBuku = "Algoritma";
	algoritma.pengarang = &joko;
	joko.bukuDikarang.push_back(algoritma.judulBuku);

	Buku basisData;
	basisData.judulBuku = "Basisdata";
	basisData.pengarang = &lia;
	lia.bukuDikarang.push_back(basisData.judulBuku);

	Buku dasarPemrograman;
	dasarPemrograman.judulBuku = "Dasar Pemrograman";
	dasarPemrograman.pengarang = &asroni;
	asroni.bukuDikarang.push_back(dasarPemrograman.judulBuku);

	Buku matematika;
	matematika.judulBuku = "Matematika";
	matematika.pengarang = &giga;
	giga.bukuDikarang.push_back(matematika.judulBuku);

	Buku multimedia;
	multimedia.judulBuku = "Multimedia 1";
	multimedia.pengarang = &giga;
	giga.bukuDikarang.push_back(multimedia.judulBuku);

	cout << "Daftar pengarang pada penerbit Gama Press :" << endl;
	for (Pengarang* pengarang : { &joko, &lia, &giga }) {
		if (pengarang->penerbit->nmPenerbit == "Gama Press") {
			cout << pengarang->nmPengarang << endl;
		}
	}
	cout << "\n";

	cout << "Daftar pengarang pada penerbit Intan Pariwara :" << endl;
	for (Pengarang* pengarang : { &asroni, &giga }) {
		if (pengarang->penerbit->nmPenerbit == "Intan Pariwara") {
			cout << pengarang->nmPengarang << endl;
		}
	}
	cout << "\n";


	cout << "Daftar penerbit yang diikuti Giga :" << endl;
	for (Penerbit* penerbit : { &gamaPress, &intanPariwara }) {
		if (penerbit->nmPenerbit == "Gama Press", "Intan Pariawara") {
			cout << penerbit->nmPenerbit << endl;
		}
	}
	cout << "\n";

	cout << "Daftar buku yang dikarang Joko:" << endl;
	for (string buku : joko.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	cout << "Daftar buku yang dikarang Lia:" << endl;
	for (string buku : lia.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	cout << "Daftar buku yang dikarang Asroni:" << endl;
	for (string buku : asroni.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";

	cout << "Daftar buku yang dikarang Giga:" << endl;
	for (string buku : giga.bukuDikarang) {
		cout << buku << endl;
	}

	return 0;

}
