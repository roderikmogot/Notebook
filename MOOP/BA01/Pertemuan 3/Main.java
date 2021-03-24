package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// if tunggal
        int bilangan;

        Scanner scan = new Scanner(System.in);

    /*    if(bilangan%2==0){
            System.out.println(bilangan + " adalah bilangan genap.");
        }*/

        //if-else sederhana

        /*System.out.print("Masukkan sembarang bilangan : ");
        bilangan = scan.nextInt();

        if(bilangan%2==0){
            System.out.println(bilangan + " adalah bilangan genap.");
        }else{
            System.out.println(bilangan + " adalah bilangan ganjil.");
        }*/

        //if-else
        /*
            Dua karakter pertama dari sebuah kode barang akan menentukan jenis barangnya.
            Jika 2 karakter pertama kode barang adalah EL, maka jenis barang adalah Elektronik
            Jika 2 karakter pertama kode barang adalah AT, maka jenis barang adalah Alat Tulis
            Jika 2 karakter pertama kode barang adalah RT, maka jenis barang adalah Rumah Tangga
            Jika 2 karakter pertama kode barang adalah PB, maka jenis barang adalah Pecah Belah
            Jika tidak, jenis tidak ditemukan

            Ex: EL003
         */

        /*String kodeBarang;

        System.out.print("Masukkan kode barang: ");
        kodeBarang = scan.next();

        if(kodeBarang.substring(0,2).equals("EL")){
            System.out.println("Jenis barang adalah Elektronik");
        }else if(kodeBarang.substring(0,2).equals("AT")){
            System.out.println("Jenis barang adalah Alat Tulis");
        }else if(kodeBarang.substring(0,2).equals("RT")){
            System.out.println("Jenis barang adalah Rumah Tangga");
        }else if(kodeBarang.substring(0,2).equals("PB")){
            System.out.println("Jenis barang adalah Pecah Belah");
        }else{
            System.out.println("Jenis barang tidak ditemukan");
        }*/


        //Nested If (if bersarang)

        /*int umur, gaji;
        String pilihan;

        System.out.print("Masukkan umur Anda: ");
        umur = scan.nextInt();

        if(umur >= 18){
            System.out.print("Apakah Anda sudah bekerja? ");
            pilihan = scan.next();

            if(pilihan.equals("Ya") || pilihan.equals("ya")){
                System.out.print("Masukkan gaji Anda: ");
                gaji = scan.nextInt();

                if(gaji > 2200000){
                    System.out.println("Anda tergolong masyarakat mampu.");
                }else{
                    System.out.println("Anda tergolong masyarakat kurang mampu.");
                }
            }else{
                System.out.println("Anda penganguran, Anda tergolong masyarakat kurang mampu.");
            }
        }else {
            System.out.println("Anda masih anak-anak atau remaja");
        }*/

        //Switch-Case

        int hari;

        System.out.print("Masukkan angka: ");
        hari = scan.nextInt();

        switch (hari){
            case 1: System.out.println("Hari ke-" + hari + " adalah hari Senin"); break;
            case 2: System.out.println("Hari ke-" + hari + " adalah hari Selasa"); break;
            case 3: System.out.println("Hari ke-" + hari + " adalah hari Rabu"); break;
            case 4: System.out.println("Hari ke-" + hari + " adalah hari Kamis"); break;
            case 5: System.out.println("Hari ke-" + hari + " adalah hari Jumat"); break;
            case 6: System.out.println("Hari ke-" + hari + " adalah hari Sabtu"); break;
            case 7: System.out.println("Hari ke-" + hari + " adalah hari Minggu"); break;
            default: System.out.println("Angka yang dimasukkan salah."); break;
        }
    }
}
