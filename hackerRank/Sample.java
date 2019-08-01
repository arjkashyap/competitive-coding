import java.util.*;
public class Sample{
    static Scanner userIn = new Scanner(System.in);
    public static void main(String args[]){
        int a = userIn.nextInt();
        int b = userIn.nextInt();
        int min;
        if(a > b)
            min = b;
        else
            min = a;
        int count = 0;
        for(int i = 1; i < a; i++){
            if( (a%i == 0) && (b%i==0))
                count += 1;
        }
        System.out.println(count);
    }
}