import java.util.*;

public class A_Simons_and_Making_It_Beautiful{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            int in=0;
            for(int i=0;i<n;i++){
                if(a[i]==n){
                    in=i;
                    break;
                }
            }
            int tm=a[0];
            a[0]=a[in];
            a[in]=tm;
            for(int i=0;i<n;i++) System.out.print(a[i]+" ");
            System.out.println();
        }
        sc.close();
    }
}