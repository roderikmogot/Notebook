package Demo;
import java.util.*;

public class Demo {

    public String name;

    public Demo(String name){
        this.name = name;
    }

//    public void setName(String name) {
//        this.name = name;
//    }

    public void printDemo(){
        System.out.println("name: " + name);
    }

    public static void main(String[] args) {
        Demo demo = new Demo("Roderik");
//        demo.setName();
        demo.printDemo();
    }
}
