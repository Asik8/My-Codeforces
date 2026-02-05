import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int [] a=new int[n];
            for(int i=0;i<n;i++) a[i]=sc.nextInt();
            int x=n,l=0,r=0;
            while(l<n && a[l]==x){
                x--;
                l++;
            }
            while(r<n && a[r]!=x) r++;
            if(l>r){
                int tmp=l;
                l=r;
                r=tmp;
            }
            while(l<r){
                int tm=a[l];
                a[l]=a[r];
                a[r]=tm;
                l++;
                r--;
            }
            for(int i=0;i<n;i++) System.out.print(a[i]+" ");
            System.out.println();
        }

    }   
}
