import java.util.*;
public class Solution {

	public static boolean isPermutation(String str1, String str2) {
		//Your code goes here
        int n=str1.length();
    	 int p=str2.length();
  
            if(n!=p){
                return false;
            }
       char ch1[] = str1.toCharArray(); 
       char ch2[] = str2.toCharArray(); 
  
    Arrays.sort(ch1);  
    Arrays.sort(ch2);
 
    for (int i = 0; i < n;  i++) 
       if (ch1[i] != ch2[i]) 
         return false; 
  
    return true;
	}

}
