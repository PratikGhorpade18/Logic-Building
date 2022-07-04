//AACEPT NUMBER ON THE toggle BIT AT 4th and 7th
 
 import java.lang.*;
 import java.util.*;
 //0000  0000  0000  0000  0000  0000  0000 1000
 
 //  0     0     0    0      0     0      4    8
 class Bitwise
 {
	 public int OnBit(int ino)   
	 {
		int mask= 0x00000048;
		int result=0;
		
		result=ino ^ mask;
		return result;
	 }
 }
 
 class program199
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
 