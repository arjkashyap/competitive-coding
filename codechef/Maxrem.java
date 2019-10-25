import java.util.*;
public class Maxrem{
    static Scanner userIn = new Scanner(System.in);
    
    public static int findMax(int[] a){
        int m = a[0];
        for(int i = 0; i < a.length; i++){
            if (a[i] > m)
                m = a[i];
       }
       return m;
    }
    
    public static int secMax(int[] b, int max){
        int sm = 0;
        for(int i = 0; i < b.length; i++){
            if(b[i] > sm && b[i] < max)
                sm = b[i];
        }
        return sm;
    }
    
    public static void main(String args[]){
        int n = userIn.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = userIn.nextInt();
        int max = findMax(arr);
        System.out.println(secMax(arr, max)%max);
        
    }
}