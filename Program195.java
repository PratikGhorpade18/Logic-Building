//CHECK BIT ON 21 IS ON OR OFF
 
 import java.lang.*;
 import java.util.*;
 
 class Bitwise
 {
	 public boolean CheckBit(int ino)
	 {
		 int imask=0x00100000;     //1048576
		 int iresult=0;
		 
		 iresult=ino & imask;
		 
		 if(iresult==0)
		 {
			 return false;
		 }
		 else 
		 {
			 return true;
	     }
	 }
 }
 
 class program195
 {
	 public static void main(String a[])
	 { 
		 Scanner sobj= new Scanner(System.in);
		 
		 System.out.println("Enter the number");
		 int value = sobj.nextInt();
		 
		Bitwise bobj= new Bitwise();
		boolean bret=bobj.CheckBit(value);
		
		if(bret==true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
		 
	 }
	 
 }
 