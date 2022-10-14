public class Solution {

	public static void wavePrint(int mat[][]){
		//Your code goes here
        int k=0,c=mat.length-1;
        if(mat.length!=0){
            k=mat[0].length;
        }
	 for(int j=0;j<k;j++){
         for(int i=0;i<mat.length;i++){
             
             if(j%2!=0){
                 System.out.print(mat[c][j]+" ");
                 c--;
             }
             else {
                 c=mat.length-1;
                 System.out.print(mat[i][j]+" ");
             }
             
         }
     }
	}

}
