package com.company;

import java.util.Scanner;

public class exceptionDemo {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int angka;
        boolean valid;

        /*try{
            System.out.print("Masukkan sebuah angka: ");
            angka = scan.nextInt();

            System.out.println("Angka yang dimasukkan adalah: " + angka);
        }catch (Exception e)
        {
            System.out.println(e);
        }*/

        /*do {
            System.out.print("Masukkan sebuah angka: ");
            try {
                valid = true;
                angka = scan.nextInt();
                System.out.println("Angka yang dimasukkan adalah: " + angka);

            } catch (Exception e) {
                valid = false;
                scan = new Scanner(System.in);
            }
        }while(!valid);*/

        int pembagi;
        double hasil;

        try{
            System.out.print("Masukkan sebuah angka: ");
            angka = scan.nextInt();
            System.out.print("Masukkan pembagi: ");
            pembagi = scan.nextInt();

            hasil=angka/pembagi;
        }catch (Exception e){
            System.out.println(e);
        }



    }
}
