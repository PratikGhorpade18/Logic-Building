//AACEPT NUMBER CHECK BIT ON 14 IS ON OR OFF
 
 import java.lang.*;
 import java.util.*;
 //0000  0000  0000  0000  0010  0000  0000 0000
 
 //0       0     0    0      2    0     0     0
 class Bitwise
 {
	 public boolean CheckBit(int ino)
	 {
		 int imask=0x00002000;      //8192
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
 
 class program196
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
 