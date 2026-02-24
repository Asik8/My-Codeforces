import java.util.*;

public class A_Parkour_Design{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int x=sc.nextInt(),y=sc.nextInt(),c=0;
            if(y<0) c=(-1*y*4);
            else c=(y*2);
            if(c<=x && ((x-c)%3==0))System.out.println("YES");
            else System.out.println("NO");  
        }
        sc.close();
    }
}