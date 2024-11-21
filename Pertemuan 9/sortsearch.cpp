#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Siswa {
    long long NISN;
    string Nama;
    int Nilai;
};

void tampilkanData(const vector<Siswa>& data) {
    for (const auto& siswa : data) {
        cout << siswa.NISN << " - " << siswa.Nama << " - " << siswa.Nilai << endl;
    }
    cout << endl;
}

// insertion sort
void insertionSort(vector<Siswa>& data, bool byNilai) {
    for (size_t i = 1; i < data.size(); ++i) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && ((byNilai ? data[j].Nilai : data[j].NISN) > (byNilai ? key.Nilai : key.NISN))) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }
}

// selection sort
void selectionSort(vector<Siswa>& data, bool byNilai) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < data.size(); ++j) {
            if ((byNilai ? data[j].Nilai : data[j].NISN) < (byNilai ? data[minIndex].Nilai : data[minIndex].NISN)) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// bubble sort
void bubbleSort(vector<Siswa>& data, bool byNilai) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        for (size_t j = 0; j < data.size() - i - 1; ++j) {
            if ((byNilai ? data[j].Nilai : data[j].NISN) > (byNilai ? data[j + 1].Nilai : data[j + 1].NISN)) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

// Pencarian biner berdasarkan NISN
int binarySearchByNISN(vector<Siswa>& data, long long targetNISN) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].NISN == targetNISN)
            return mid; // Mengembalikan indeks siswa
        else if (data[mid].NISN < targetNISN)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Tidak ditemukan
}

// Pencarian Beruntun dan mengubah nama
void ubahNamaByNilai(vector<Siswa>& data, int targetNilai, const string& namaBaru) {
    for (auto& siswa : data) {
        if (siswa.Nilai == targetNilai) {
            siswa.Nama = namaBaru;
        }
    }
}

int main() {
    // Data awal
    vector<Siswa> data = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjir R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60},
    };

    cout << "Data asli:" << endl;
    tampilkanData(data);

    // *No 1: Pengurutan*
    cout << "=== No 1: Pengurutan ===" << endl;

    // insertion sort berdasarkan NISN
    vector<Siswa> dataByNISN = data;
    insertionSort(dataByNISN, false);
    cout << "Data diurutkan berdasarkan NISN (Insertion Sort):" << endl;
    tampilkanData(dataByNISN);

    // insertion sort berdasarkan Nilai
    vector<Siswa> dataByNilai = data;
    insertionSort(dataByNilai, true);
    cout << "Data diurutkan berdasarkan Nilai (Insertion Sort):" << endl;
    tampilkanData(dataByNilai);

    // selection sort berdasarkan NISN
    dataByNISN = data;
    selectionSort(dataByNISN, false);
    cout << "Data diurutkan berdasarkan NISN (Selection Sort):" << endl;
    tampilkanData(dataByNISN);

    // selection sort berdasarkan Nilai
    dataByNilai = data;
    selectionSort(dataByNilai, true);
    cout << "Data diurutkan berdasarkan Nilai (Selection Sort):" << endl;
    tampilkanData(dataByNilai);

    // bubble sort berdasarkan NISN
    dataByNISN = data;
    bubbleSort(dataByNISN, false);
    cout << "Data diurutkan berdasarkan NISN (Bubble Sort):" << endl;
    tampilkanData(dataByNISN);

    // bubble sort berdasarkan Nilai
    dataByNilai = data;
    bubbleSort(dataByNilai, true);
    cout << "Data diurutkan berdasarkan Nilai (Bubble Sort):" << endl;
    tampilkanData(dataByNilai);

    // *No 2: Pencarian Bagi Dua*
    cout << "=== No 2: Pencarian Bagi Dua ===" << endl;
    long long targetNISN = 9950310962;
    // Pastikan data terurut berdasarkan NISN sebelum binary search
    insertionSort(data, false);
    int index = binarySearchByNISN(data, targetNISN);
    if (index != -1) {
        cout << "Data dengan NISN " << targetNISN << " ditemukan." << endl;
        cout << "Nama: " << data[index].Nama << ", Nilai: " << data[index].Nilai << endl;
    } else {
        cout << "Data dengan NISN " << targetNISN << " tidak ditemukan." << endl;
    }

    // *No 3: Pengubahan Nama*
    cout << "\n=== No 3: Mengubah Nama ===" << endl;
    int targetNilai = 60;
    string namaBaru = "Joko";
    ubahNamaByNilai(data, targetNilai, namaBaru);
    cout << "Data setelah nama dengan nilai " << targetNilai << " diubah menjadi " << namaBaru << ":" << endl;
    tampilkanData(data);

    return 0;
}
