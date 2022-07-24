///  (SWAP TWO ROWS )                                 USED BY PACKAGE OF MATRIX CLASSS

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;


class mymatrix extends Matrix
{

  public mymatrix(int a,int b)
  {
     super(a,b);
	}

   public void swaprow()
   {
      int itemp=0;
	  
	  for(int i=0;i<iRow-1;i+=2)
	  {
		  for(int j=0;j<iCol;j++)
		  {
			  itemp=Arr[i][j];
			  Arr[i][j]=Arr[i+1][j];
			  Arr[i+1][j]=itemp;
		  }
	  }
   }

}

class program334
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int X = sobj.nextInt();

        System.out.println("Enter number of columns");
        int Y = sobj.nextInt();

        mymatrix mobj=new mymatrix(X,Y);
		
        mobj.Accept();
		mobj.Display();
		
		mobj.swaprow();
		System.out.println("data after swapping is");
		mobj.Display();
    }
}