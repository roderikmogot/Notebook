package com.company;

import java.util.Scanner;

public class loopingCase {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int x=1;

        //While
        /*while(x<9){
            if(x%2==0){
                System.out.println(x + " adalah bilangan genap.");
            }else{
                System.out.println(x + " adalah bilangan ganjil.");
            }
            x++;
        }*/

        //for looping
        /*for(int i=1; i<9; i++){
            if(i%2==0){
                System.out.println(i + " adalah bilangan genap.");
            }else{
                System.out.println(i + " adalah bilangan ganjil.");
            }
        }

        int awal, akhir;
        System.out.print("Masukkan angka awal: ");
        awal = scan.nextInt();
        System.out.print("Masukkan angka akhir: ");
        akhir = scan.nextInt();

        for(int i=awal; i<=akhir; i++){
            if(i%2==0){
                System.out.println(i + " adalah bilangan genap.");
            }else{
                System.out.println(i + " adalah bilangan ganjil.");
            }
        }*/

        //Do - While

        /*int awal, akhir;
        System.out.print("Masukkan angka awal: ");
        awal = scan.nextInt();
        System.out.print("Masukkan angka akhir: ");
        akhir = scan.nextInt();

        do{
            if(awal%2==0){
                System.out.println(awal + " adalah bilangan genap.");
            }else{
                System.out.println(awal + " adalah bilangan ganjil.");
            }
            awal ++;
        }while(awal < akhir);*/

        String nim, nama;
        char pilihan;

        do {
            System.out.print("Masukkan NIM: ");
            nim = scan.next();
            System.out.print("Masukkan Nama Mahasiswa: ");
            nama = scan.next();

            System.out.println("=================================");
            System.out.println("Data Mahasiswa");
            System.out.println("=================================");
            System.out.println("NIM: " + nim);
            System.out.println("Nama Mahasiswa: " + nama);
            System.out.println("=================================");
            System.out.print("Apakah Anda ingin menginput data lagi? [Y/T]: ");
            pilihan = scan.next().charAt(0);
        }while(pilihan=='Y');

    }
}
