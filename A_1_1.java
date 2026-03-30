import java.util.*;

public class A_1_1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            String str=sc.next();
            StringBuilder s=new StringBuilder(str);
            for(int i=1;i<n-1;i++){
                if(s.charAt(i-1)=='1' && s.charAt(i+1)=='1'){
                    s.setCharAt(i, '1');
                }
            }
            int mx=0;
            for(int i=0;i<n;i++) if(s.charAt(i)=='1') mx++;
            for(int i=1;i<n-1;i++){
                if(s.charAt(i-1)=='1' && s.charAt(i+1)=='1'){
                    s.setCharAt(i, '0');
                }
            }
            int m=0;
            for(int i=0;i<n;i++) if(s.charAt(i)=='1') m++;
            System.out.printf("%d %d\n",m,mx);
        }
        sc.close();
    }
}