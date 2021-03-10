import java.util.*;

public class StringCase {
    public static void main(String[] args) {
        String str1 = new String("Selamat datang di MOOP");
        String str2 = "Selamat datang di Pemrograman Java 2";

        char[] charArray = {'S','e','l','a','m','a','t', ' ', 'P', 'a', 'g', 'i'};
        String str3 = new String(charArray);

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);

        // menggunakan equals
        if(str1.equals(str2)){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }

        // menggunakan ==
        if(str1 == str2){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }

        // menggunakan compareTo, 0 -> equal
        System.out.println(str1.compareTo(str2));

        // length string
        System.out.println("Panjang string str1: " + str1.length());

        // get string index
        System.out.println("String str1 ke 2: " + str1.charAt(2));

        // fungsi menggabungkan dua atau lebih string
        System.out.println("str1 + str2: " + str1.concat(str2));

        // mendapatkan karakter pada string berdasarkan index
        System.out.println("Mendapatkan beberapa string dr str2: " + str2.substring(0,7));

        // mengubah string ke huruf kecil
        System.out.println("Lower case str2: " + str2.toLowerCase());

        // mengubah string ke huruf besar
        System.out.println("Upper case str2: " + str2.toUpperCase());

        // mengeliminasi space pada string terujung dan awalan string
        System.out.println("Upper case str2: " + str2.trim());

        // mengganti karakter tertentu
        System.out.println("Upper case str2: " + str2.replace('a','o'));

        // mengganti karakter pertama
        System.out.println("Selamat".replaceFirst("Selamat","ANJAY"));

        // mendapatkan phi
        System.out.println(Math.PI);

        int x = 10;

        // mendapatkan trignometri
        System.out.println(Math.sin(x));
        System.out.println(Math.cos(x));
        System.out.println(Math.tan(x));

        // mendapatkan hasil eksponen
        System.out.println(Math.exp(x));
        System.out.println(Math.log10(x));

        System.out.println();

        // rounding <> pembulatan
        double y = 23.499;
        System.out.println(Math.ceil(y));
        System.out.println(Math.floor(y));
        System.out.println(Math.rint(y));       // bedanya dengan ceil: .5 keatas, 0.499 kebawah
        System.out.println(Math.round(y));

        System.out.println();

        // Array
        float[] arr = {23f,24f,25f,26f};

        System.out.println(arr[0]);
        System.out.println(arr[1]);
        System.out.println(arr[2]);
        System.out.println(arr[3]);


        float numberOfArray[];
        numberOfArray = new float[5];

        numberOfArray[0] = 1f;
        numberOfArray[1] = 4f;
        numberOfArray[2] = 3f;
        numberOfArray[3] = 22f;
        numberOfArray[4] = 41f;

        System.out.println(numberOfArray[0]);
        System.out.println(numberOfArray[1]);
        System.out.println(numberOfArray[2]);
        System.out.println(numberOfArray[3]);
        System.out.println(numberOfArray[4]);
    }
}
