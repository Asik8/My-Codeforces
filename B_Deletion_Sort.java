import java.util.*;

public class B_Deletion_Sort{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            boolean s=true;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    s=false;
                    break;
                }
            }
            if(s) System.out.println(n);
            else System.out.println(1);
        }
        sc.close();
    }
}