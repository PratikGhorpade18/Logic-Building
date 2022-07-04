//AACEPT NUMBER ON THE toggle BIT AT 4(8)
 
 import java.lang.*;
 import java.util.*;
 //0000  0000  0000  0000  0000  0000  0000 1000
 
 //0       0     0    0         0     0     8
 class Bitwise
 {
	 public int OnBit(int ino)   
	 {
		int mask= 0x00000008;
		int result=0;
		
		result=ino ^ mask;
		return result;
	 }
 }
 
 class program198
 {
	 public static void main(String a[])
	 { 
		 Scanner sobj= new Scanner(System.in);
		 
		 System.out.println("Enter the number");
		 int value = sobj.nextInt();
		 
		Bitwise bobj= new Bitwise();
		int iret=bobj.OnBit(value);
		
		System.out.println("Updated number is : "+iret);
	 }
	 
 }
 