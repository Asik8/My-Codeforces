import java.util.*;

public class A_String_Rotation_Game{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            String s=sc.next();
            int ans=0,f=0;
            for(int i=0;i<n-1;i++){
                if(s.charAt(i)!=s.charAt(i+1)) ans++;
                else f=1;
            }
            if(f==1 && s.charAt(0)!=s.charAt(n-1)) ans++;
            System.out.println(ans+1);
        }
        sc.close();
    }
}