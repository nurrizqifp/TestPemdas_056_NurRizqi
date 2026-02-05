#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Produk{
    protected:
        string nama;
        long harga;
    public:
        Produk(string n, long h) : nama(n), harga(h) {}
    // Lengkapi
    void getProduk(string n, long h){
        nama = n;
        harga = h;
    }
    void showProduk(string n, long h){
        cout << nama;
        cout << harga;
    }

    virtual ~Produk() {}
};

class Laptop : public Produk {
    private: 
        int ram;
    public:
        Laptop(string n, long h, int r) : Produk(n, h), ram(r) {}
    void getLaptop(string n, long h, int r){
        nama = n;
        harga = h;
        ram = r;
    }
    void showLaptop(string n, long h, int r){
        cout << nama;
        cout << harga;
        cout << ram;
    }
};

class Smartphone : public Produk {
    private:
        int baterai;
    public:
        Smartphone (string n, long h, int b) : Produk(n, h), baterai (b) {}

    void getLaptop(string n, long h, int b){
        nama = n;
        harga = h;
        baterai = b;
    }
    void showLaptop(string n, long h, int b){
        cout << nama;
        cout << harga;
        cout << baterai;
    }
};

int main() {
    vector<Produk*> daftarBarang;
    Laptop l ();
    Smartphone sp;
    int pilihan;

    do{
        cout << "\n--- MENU TOKO ELEKTRONIK ---\n";
        cout << "1. Tambah Laptop\n2. Tambah Smartphone\n3. Lihat semua Barang\n4. Keluar\nPilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            string n; long h; int r;
            cout << "Nama Laptop: "; cin >> n;
            cout << "Harga: "; cin >> h;
            cout << "Ram: "; cin >> r;
            daftarBarang.push_back(new Laptop(n, h, r));
        }
        else if(pilihan == 2) {
            string n; long h; int b;
            cout << "Nama Smartphone: "; cin >> n;
            cout << "Harga: "; cin >> h;
            cout << "Baterai: "; cin >> b;
            daftarBarang.push_back(new Laptop(n, h, b));
            // Lengkapi
        }
        else if (pilihan == 3) {
            cout << "\n--- DAFTAR INVENTARIS ---\n";
            
        }
    } while (pilihan != 4);
}