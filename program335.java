///  (SWAP TWO COLUMNS )                                 USED BY PACKAGE OF MATRIX CLASSS

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;


class mymatrix extends Matrix
{

  public mymatrix(int a,int b)
  {
     super(a,b);
	}

   public void swapcol()
   {
      int itemp=0;
	  
	  for(int i=0;i<iRow;i++)
	  {
		  for(int j=0;j<iCol-1;j+=2)
		  {
			  itemp=Arr[i][j];
			  Arr[i][j]=Arr[i][j+1];
			  Arr[i][j+1]=itemp;
		  }
	  }
   }

}

class program335
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
		
		mobj.swapcol();
		System.out.println("data after swapping is");
		mobj.Display();
    }
}