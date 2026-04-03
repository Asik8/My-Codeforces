import java.util.*;

public class A_Passing_the_Ball{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            String s=sc.next();
            int i=0;
            while(i<n && s.charAt(i)=='R') i++;
            System.out.println(i+1);
        }
    }
}