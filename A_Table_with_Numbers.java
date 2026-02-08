import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt(),h=sc.nextInt(),l=sc.nextInt(),e=0,c=0;
            int [] a=new int[n];
            if(h>l){
                h=h^l;
                l=h^l;
                h=h^l;
            }
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
                if(a[i]<=h) e++;
                else if(a[i]<=l) c++;
            }
            if(e<=c) System.out.println(e);
            else System.out.println(c+(e-c)/2);
        }
    }
}