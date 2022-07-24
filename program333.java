///  FIND MAXIMUM NUNBER AND MINIMUM ALSO                                  USED BY PACKAGE OF MATRIX CLASSS

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;


class mymatrix extends Matrix
{

  public mymatrix(int a,int b)
  {
     super(a,b);
	}

 public int maximum()
   {
      int imax= Arr[0][0];
	  
	   for(int i= 0; i< Arr.length; i++)
           {
                for(int j = 0; j < Arr[i].length; j++)
                {
                    if(Arr[i][j] > imax)
                    {
                        imax = Arr[i][j];
                    }
                }
           }
        return imax;
   }




   public int minimum()
   {
      int imin= Arr[0][0];
	  
	   for(int i= 0; i< Arr.length; i++)
           {
                for(int j = 0; j < Arr[i].length; j++)
                {
                    if(Arr[i][j] < imin)
                    {
                        imin = Arr[i][j];
                    }
                }
           }
        return imin;
   }

}

class program333
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
		
		int iret=mobj.maximum();
		System.out.println("maximum number is : "+iret);
		int ret=mobj.minimum();
		System.out.println("minimum number is : "+ret);
    }
}