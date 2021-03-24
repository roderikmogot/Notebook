package com.company;

import java.util.Scanner;

public class methodDemo {
    static Scanner scan = new Scanner(System.in);
    static int menu;

    public static void main(String[] args){
        int sisi1, sisi2;

        viewMenuUtama();

        if(menu==1) {
            System.out.print("Masukkan Panjang: ");
            sisi1 = scan.nextInt();
            System.out.print("Masukkan Lebar: ");
            sisi2 = scan.nextInt();
            System.out.println("Luas Persegi Panjang: " + hitungLuasPersegiPanjang(sisi1, sisi2));
        }


    }

    static void viewMenuUtama(){
        System.out.println("Luas dan Keliling Bangun Datar");
        System.out.println("==============================");
        System.out.println("1. Luas Persegi Panjang");
        System.out.println("2. Keliling Persegi Panjang");
        System.out.println("3. Luas Lingkaran");
        System.out.println("4. Keliling Lingkaran");
        System.out.println("==============================");
        System.out.print("Pilih menu: ");
        menu = scan.nextInt();
    }

    static int hitungLuasPersegiPanjang(int panjang, int lebar){
        int luas = panjang * lebar;

        return luas;
    }

    int hitungKelilingPersegiPanjang(int panjang, int lebar){
        int keliling = (2 * panjang) + (2 * lebar);

        return keliling;
    }
}
