import java.util.Scanner;

public class A_Binary_Array_Game{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int [] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            if(a[0]==1 || a[n-1]==1) System.out.println("Alice");
            else System.out.println("Bob");
        }
    }
}