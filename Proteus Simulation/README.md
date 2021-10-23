# Navigasi
- [Spesifikasi](#Spesifikasi)
- [Cara Kerja](#Cara-Kerja)

# Spesifikasi

| Nama               | Gambar                                                                                                          | Spesifikasi                                    | Keterangan                                                                                                      |   |
|--------------------|-----------------------------------------------------------------------------------------------------------------|------------------------------------------------|-----------------------------------------------------------------------------------------------------------------|---|
| Water Level Sensor | ![image](https://user-images.githubusercontent.com/32509276/138574340-ed9b7020-d39f-485b-b1dd-905d2e24edcd.png) | Bekerja dalam tegangan 3.3V - 5V               | Penggunaan komponen induktor, kapasitor, dan POT hanya digunakan dalam simulasi                                 |   |
| Arduino UNO R3     | ![image](https://user-images.githubusercontent.com/32509276/138574587-eef6986a-7d93-47c4-a5b2-107a237856d1.png) | ATMEGA 328p, CH340G, Bekerja dalam tegangan 5V | Arduino belum termasuk kabel untuk menghubungkan ke komputer dan power adapter                                  |   |
| Relay              | ![image](https://user-images.githubusercontent.com/32509276/138574589-edc72398-77ad-40a8-ab72-2c6b64bb7011.png) | 1 CHANNEL DC 5V                                | Volt harus disesuaikan dengan input power yang ada, disini relay dihubungkan ke Arduino sehingga menggunakan 5V |   |

# Cara Kerja

![Untitled Diagram](https://user-images.githubusercontent.com/32509276/138574679-7bf49db3-5a3c-408d-8fa2-bddbd6770fa1.jpg)

1. Water level sensor akan akan mengirim nilai output dengan range(0, 330) yang dimulai dari ujung tembaga dari sensor sampai akhir
2. Output dari water level sensor kemudian menjadi variable untuk mengindikasi ketinggian air atau pada kasus ini mendeteksi air dalam penampungan air sudah pada batasnya
3. Jika air sudah pada batasnya maka arduino akan menyalakan relay, ini membuat aliran listrik yang ada terhubung pada relay akan menjadi terhubung, seperti halnya saklar yang ditekan

Proses ini akan membuat saklar otomatis dengan air yang menjadi trigger untuk menghidupkan alat yang terhubung pada relay.
