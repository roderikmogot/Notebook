package com.company;

import java.util.Scanner;

public class arrayDemo {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        //Cara Statis
        /*int[] angka = new int[5];
        angka[0] = 9;
        angka[1] = 4;
        angka[2] = 3;
        angka[3] = 7;
        angka[4] = 5;

        int[] angka = {9, 4, 3, 7, 5};


        System.out.println("Angka array indeks ke-0: " + angka[0]);
        System.out.println("Angka array indeks ke-1: " + angka[1]);
        System.out.println("Angka array indeks ke-2: " + angka[2]);
        System.out.println("Angka array indeks ke-3: " + angka[3]);
        System.out.println("Angka array indeks ke-4: " + angka[4]);
         */

        //Cara Dinamis
        /*int[] angka = new int[5];

        int index = angka.length;

        for(int i=0; i<index; i++){
            System.out.print("Masukkan angka ke array index ke-" + i + ": ");
            angka[i] = scan.nextInt();
        }

        for(int i=0; i<index; i++){
            if(angka[i]%2==0){
                System.out.println(angka[i] + " adalah bilangan genap");
            }else{
                System.out.println(angka[i] + " adalah bilangan ganjil");
            }

        }
         */


        //Array 2 dimensi
        int[][] angka = new int[3][3];
        //int[][] angka = {{2,5,3}, {4,7,9}, {8,3,6}};

        //String str = "253479836";
        //char[] ch = new char[str.length()];

        for(int baris=0; baris<3; baris++){
            for(int kolom=0; kolom<3; kolom++){
                System.out.print("Masukkan array baris ke-" + baris + ", kolom ke-" + kolom + ": ");
                angka[baris][kolom] = scan.nextInt();
            }
        }

        for(int baris=0; baris<3; baris++){
            for(int kolom=0; kolom<3; kolom++){
                System.out.print("  " + angka[baris][kolom]);
            }
            System.out.println();
        }

    }
}
