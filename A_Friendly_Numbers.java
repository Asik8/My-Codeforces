import java.util.Scanner;

public class Main{

    static int sum(int x){
        int s=0;
        while(x>0){
            s+=x%10;
            x/=10;
        }
        return s;
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int c=0;
            for(int i=n;i<n+100;i++){
                if(i-sum(i)==n){
                    c++;
                }
            }
            System.out.println(c);
        }

    }
}