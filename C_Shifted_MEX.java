import java.util.*;

public class C_Shifted_MEX{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            Arrays.sort(a);
            int m=0;
            for(int i=0;i<n;i++){
                if(a[i]==m){
                    m++;
                }
            }
            for(int i=0;i<n;i++){
                int r=(a[i]*(-1));
                int[] b=a.clone();
                for(int j=0;j<n;j++) b[j]+=r;
                int m1=0;
                for(int j=0;j<n;j++){
                    if(b[j]==m1){
                        m1++;
                    }
                }
                if(m1>m) m=m1;
            }
            System.out.println(m);
        }
    }
}