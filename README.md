# Flight Info Linked List (C++)

Program C++ sederhana untuk mengelola data penerbangan menggunakan struktur data Singly Linked List (SLL). Dibuat sebagai tugas mata kuliah Struktur Data, dengan operasi dasar linked list seperti insert, delete, search, dan sort pada studi kasus data penerbangan.

## Fitur

Setiap data penerbangan (`infotype`) menyimpan:
- `flightNumber`: Nomor penerbangan
- `departureCity`: Kota keberangkatan
- `arrivalCity`: Kota tujuan
- `arrivalTime`: Waktu kedatangan

Operasi linked list yang diimplementasikan:

| Fungsi | Deskripsi |
|---|---|
| `Create_List` | Membuat list kosong |
| `New_Elemen` | Membuat node baru dari data penerbangan |
| `Insert_First` | Menyisipkan node di awal list |
| `Insert_Last` | Menyisipkan node di akhir list |
| `Insert_After` | Menyisipkan node setelah node tertentu |
| `Delete_First` | Menghapus node pertama |
| `Delete_Last` | Menghapus node terakhir |
| `Delete_After` | Menghapus node setelah node tertentu |
| `SearchByFlightNumber` | Mencari penerbangan berdasarkan nomor penerbangan |
| `SortByFlightNumber` | Mengurutkan list berdasarkan nomor penerbangan |
| `Show` | Menampilkan seluruh data dalam list |

## Struktur Project

```
sll/
├── main.cpp        (program utama, input data dan pemanggilan fungsi list)
├── SLL.cpp         (implementasi seluruh operasi linked list)
├── SLL.h           (deklarasi struct dan prototipe fungsi)
├── sll.cbp         (project file Code::Blocks)
└── sll.depend
```

## Cara Menjalankan

### Menggunakan Code::Blocks
1. Buka file `sll.cbp` di Code::Blocks.
2. Build & Run (`F9`).

### Menggunakan g++ (terminal)
```bash
g++ main.cpp SLL.cpp -o sll
./sll
```

## Contoh Alur Program

1. Input data penerbangan 1 → disisipkan di awal list (`Insert_First`).
2. Input data penerbangan 2 → disisipkan di akhir list (`Insert_Last`).
3. Tampilkan seluruh isi list.
4. Cari penerbangan berdasarkan nomor penerbangan, lalu hapus node setelahnya.
5. Urutkan list berdasarkan nomor penerbangan.
6. Tampilkan list setelah diurutkan.

## Teknologi

- **Bahasa:** C++
- **Struktur Data:** Singly Linked List
- **IDE:** Code::Blocks

## Author

Dibuat sebagai tugas kuliah, implementasi Singly Linked List untuk manajemen data penerbangan.
