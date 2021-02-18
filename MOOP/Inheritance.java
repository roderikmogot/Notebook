package Demo;
import java.util.*;

class Testing{
    public void sayHi(){
        System.out.println("I'm the super class");
    }
}

public class Demo extends Testing{
    public void sayHiToo(){
        super.sayHi();      //accessing testing instance as the super class
        System.out.println("Hi, from the other side");
    }

    public static void main(String[] args) {
        Demo coba = new Demo();
        coba.sayHiToo();
    }
}
