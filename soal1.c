/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Rafi Arif Putra (13224033)
 *   Nama File           : soal1.c
 *   Deskripsi           : Fungsi yang memulihkan nilai tidak valid (-1) pada array berdasarkan beberapa instruksi
 * 
 */

#include <stdio.h>
#include <math.h>

int main(){
    int n; // Deklarasi n sebagai jumlah bilangan
    scanf("%d", &n);
    int arr[n];

    // Iterasi for loop untuk bilangan dari user input sebanyak n (jumlah bilangan)
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]); // Bilangan disimpan sebagai data pada array ke-i
    }

    for (int i = 0; i < n; i++){
        int truth = 1;
        if (arr[i] == -1){
            for(int j = 1; j < n-i; j++){
                if (arr[i-j] != -1 && truth == 1){
                    for (int k = 1; k < n-i; k++){
                        if (arr[i+k] != -1 && truth == 1){
                            int p = arr[i-j];
                            int n = arr[i+k];
                            arr[i] = floor((p+n)/2);
                            truth = 0;
                        }
                    }
                }
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    if (sum == -1*n){
        sum = 0;
        for (int i = 0; i < n; i++){
            arr[i] = 0;
        }
    }

    printf("RECOVERED");
    for (int i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    printf("\nMAX_SUM %d", sum);
}
