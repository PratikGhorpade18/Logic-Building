//accept number aacept position and toggle
 
 import java.lang.*;
 import java.util.*;
 //0000  0000  0000  0000  0000  0000  0000 0000
 
 //  0     0     0    0      0     0      0    0
 class Bitwise
 {
	public int ToggleBit(int ino,int ipos)
	{
		int mask=0x00000001;
		int result=0;
		
		mask= mask<<(ipos-1);
		
		result=ino^mask;
		return result;
		
	}
 }
 
 class program200
 {
	 public static void main(String a[])
	 { 
		 Scanner sobj= new Scanner(System.in);
		 
		 System.out.println("Enter the number");
		 int value = sobj.nextInt();
		 
		 System.out.println("Enter position");
		 int pos = sobj.nextInt();
		 
		 
		 Bitwise bobj= new Bitwise();
		 int iret=bobj.ToggleBit(value,pos);
		 
		 System.out.println("Updated number is : "+iret);
	 }
	 
 }
 