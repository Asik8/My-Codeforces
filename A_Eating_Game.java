import java.util.*;

public class A_Eating_Game{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            int c=0,mx=0;
            for(int i=0;i<n;i++) if(a[i]>mx) mx=a[i];
            for(int i=0;i<n;i++) if(a[i]==mx) c++;
            System.out.println(c);
        }
        sc.close();
    }
}