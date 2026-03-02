import java.util.*;

public class C_Specialty_String{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            String s=sc.next(),ans="";
            int r=(s.length())-1;
            while(r>=0){
                if(!ans.isEmpty() && ans.charAt(ans.length()-1) == s.charAt(r)) ans=ans.substring(0,ans.length()-1);
                else ans+=s.charAt(r);
                r--;
            }
            if(ans.isEmpty()) System.out.println("YES");
            else System.out.println("NO");
        }
        sc.close();
    }
}