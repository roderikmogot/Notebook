import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        HashSet<String> Vechiles = new HashSet<String>();
        for(int i = 0; i < 4; i++){
            String n = input.nextLine();
            Vechiles.add(n);
        }
        for(String x: Vechiles){
            System.out.println(x);
        }
    }
}
