import java.util.Scanner;

public class A_Sieve_of_Erato_67_henes{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int a[]=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            boolean f=false;
            for(int i=0;i<n;i++){
                if(a[i]==67){
                    f=true;
                    break;
                }
            }
            if(f) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}