# Cross-Traffic-Light-System 🚦

Sistem pengatur lalu lintas otomatis berbasis Arduino Uno yang dirancang untuk mengelola persimpangan empat arah (**Utara, Timur, Selatan, Barat**) dengan siklus lampu yang realistis.

---

## 📸 Preview Sistem


*Simulasi rangkaian menggunakan Tinkercad/Proteus.*

---

## ✨ Fitur Utama

- **4-Way Intersection Control**: Manajemen lalu lintas penuh untuk empat arah mata angin.
- **Siklus Realistis**:
  - **Hijau**: 5 detik untuk kelancaran arus.
  - **Kuning Berkedip**: Peringatan transisi (3x kedipan).
  - **Kuning Statis**: Persiapan berhenti (2 detik).
  - **Merah**: Berhenti total saat jalur lain aktif.
- **Modular Code**: Menggunakan fungsi `playCross()` untuk efisiensi dan kemudahan modifikasi.

---

## 🛠️ Komponen Elektronika

| Komponen | Jumlah | Spesifikasi |
| :--- | :---: | :--- |
| **Arduino Uno** | 1 | R3 atau yang kompatibel |
| **LED Merah** | 4 | 5mm Standard |
| **LED Kuning** | 4 | 5mm Standard |
| **LED Hijau** | 4 | 5mm Standard |
| **Resistor** | 12 | 330 Ω |
| **Breadboard** | 1 | Full Size / Half Size |
| **Kabel Jumper** | Secukupnya | Male-to-Male |

---

## 📍 Konfigurasi Pin Arduino

| Posisi Simpang | Merah (🔴) | Kuning (🟡) | Hijau (🟢) |
| :--- | :---: | :---: | :---: |
| **Utara** | Pin 11 | Pin 12 | Pin 13 |
| **Timur** | Pin 8 | Pin 9 | Pin 10 |
| **Selatan** | Pin 5 | Pin 6 | Pin 7 |
| **Barat** | Pin 2 | Pin 3 | Pin 4 |

---

## 📂 Struktur Proyek

```text
Cross-Traffic-Light-System/
├── code/
│   └── cross_traffic_light1.ino    # Source code Arduino
├── documentation/
│   ├── CrossTrafficLight.png       # Gambar rangkaian
│   ├── CrossTrafficLight.pdf       # Skema PDF
│   └── ...
├── report/
│   └── Tugas 3_...pdf              # Laporan proyek
└── README.md                       # Dokumentasi utama
```

---

## 🚀 Cara Penggunaan

1. **Persiapan Hardware**: Susun komponen sesuai dengan tabel **Konfigurasi Pin** di atas. Pastikan menggunakan resistor 330Ω untuk setiap LED guna menghindari kerusakan.
2. **Setup Software**:
   - Buka file [cross_traffic_light1.ino](file:///d:/Arduino/Cross-Traffic-Light-System/code/cross_traffic_light1.ino) menggunakan **Arduino IDE**.
   - Hubungkan Arduino Uno ke komputer melalui kabel USB.
3. **Upload**:
   - Pilih Board: *Tools > Board > Arduino Uno*.
   - Pilih Port: *Tools > Port > (Pilih port yang sesuai)*.
   - Klik tombol **Upload** (Tanda panah ke kanan).
4. **Monitoring**: Perhatikan urutan lampu yang dimulai dari sisi Utara searah jarum jam.

---

## 📝 Catatan Tambahan

Sistem ini dikembangkan sebagai bagian dari tugas simulasi mikrokontroler. Logika program dirancang untuk memastikan tidak ada dua jalur hijau yang menyala secara bersamaan guna menghindari tabrakan virtual.

---
*Dibuat oleh Fawwaz Aufa Al Ghautsa Rafi*
