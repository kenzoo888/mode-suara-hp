#include <stdio.h>

// 1. DEKLARASI ENUM
// HENING = 1, GETAR = 2, SUARA = 3
typedef enum {
    HENING = 1,
    GETAR,
    SUARA
} ModeNotifikasi;

int main() {
    int pilihan;

    printf("===========================================\n");
    printf("     PENGATURAN MODE NOTIFIKASI HP         \n");
    printf("===========================================\n");
    printf("Pilih Mode Notifikasi:\n");
    printf("1. Hening\n");
    printf("2. Getar\n");
    printf("3. Suara\n");
    printf("Masukkan pilihan (1-3): ");

    // Membaca input angka dari pengguna
    scanf("%d", &pilihan);

    // Mengubah angka pilihan menjadi tipe data Enum
    ModeNotifikasi mode = (ModeNotifikasi)pilihan;

    printf("\n--- Status Mode Saat Ini ---\n");

    // 2. KONTROL ALUR DENGAN SWITCH-CASE
    switch (mode) {
        case HENING:
            printf("Mode       : HENING\n");
            printf("Status     : Tidak ada suara & tidak ada getaran.\n");
            printf("Keterangan : Cocok untuk saat rapat atau belajar.\n");
            break;

        case GETAR:
            printf("Mode       : GETAR\n");
            printf("Status     : HP hanya bergetar saat ada panggilan/pesan.\n");
            printf("Keterangan : Cocok untuk di luar ruangan yang agak bising.\n");
            break;

        case SUARA:
            printf("Mode       : SUARA\n");
            printf("Status     : Nada dering dan getaran aktif.\n");
            printf("Keterangan : Suara notifikasi terdengar maksimal.\n");
            break;

        default:
            printf("[ERROR] Pilihan tidak valid! Pilih angka 1 sampai 3.\n");
            break;
    }

    return 0;
}