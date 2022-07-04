 //ACCEPT NUMBER AND CONVERT INTO BINARY
 
 import java.lang.*;
 import java.util.*;
 
 class Bitwise
 {
	 public void DisplayBinary(int ino)
	 {
		int idigit=0;
       
      while(ino!=0)
	  {
        idigit=ino %2;
        		
		 System.out.print(idigit);
		 
		 ino=ino / 2;
	  }
	  System.out.println();
	 }
 }
 
 class program191
 {
	 public static void main(String a[])
	 { 
		 Scanner sobj= new Scanner(System.in);
		 
		 System.out.println("Enter the number");
		 int value = sobj.nextInt();
		 
		Bitwise bobj= new Bitwise();
		bobj.DisplayBinary(value);
		 
	 }
	 
 }