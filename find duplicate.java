public class Solution{  
    
    public static int duplicateNumber(int arr[]) {
    	//Your code goes here
        for(int i=0; i<arr.length; i++){
            //int count=-1;
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]== arr[j]){
                    //count++;
                     return arr[i];
                }
            }
            //if(count>0)
               
        }
        return 0;
    }
    
}
