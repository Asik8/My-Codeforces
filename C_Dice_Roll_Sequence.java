import java.util.*;

public class C_Dice_Roll_Sequence{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            int c=0;
            for(int i=1;i<n;i++){
                if(a[i]+a[i-1]==7 || a[i]==a[i-1]){
                    c++;
                    i++;
                }
            }
            System.out.println(c);
        }
        sc.close();
    }
}