import java.util.Scanner;

public class Attend{
    static Scanner userIn = new Scanner(System.in);
    public static void main(String[] args){
        int t = userIn.nextInt();
        while (t > 0){
            int n = userIn.nextInt();
            userIn.nextLine();
            String[][] arr = new String[n][2];
           
            for(int i = 0; i < n; i++){
                arr[i] = userIn.nextLine().split(" ", 2);
    
            } 
            for(int i = 0; i < n; i++){
                boolean found = false;
                for(int j = 0; j < n; j++){
                    
                    if(arr[i][0].equals(arr[j][0]) && i != j){
                        found = true;
                        
                        break;
                    }
                }   
                
                if(found)
                    System.out.println(arr[i][0] + " " + arr[i][1]);
                
                else
                    System.out.println(arr[i][0]);
            }
            t = t - 1;        
        }   
    }
}