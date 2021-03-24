package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        //Jump Operation for Break
        /*for(int i=1; i<=3; i++){
            for(int j=1; j<=3; j++){
                if(j==2)
                    break;
                System.out.println("i = " + i + ", j = " + j);
            }
        }
         */

        //Jump Operation for Break-Label
        /*outterA:
        for(int i=1; i<=3; i++){
            innerA:
            for(int j=1; j<=3; j++){
                if(j==2)
                    break innerA;
                System.out.println("i = " + i + ", j = " + j);
            }
        }
         */

        //Jump Operation for Continue-Label
        outterB:
        for(int i=1; i<=3; i++){
            innerB:
            for(int j=1; j<=3; j++){
                if(j==2)
                    continue innerB;
                System.out.println("i = " + i + ", j = " + j);
            }
        }
    }
}
