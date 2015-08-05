import java.io.*;
import java.util.*;
class shop{

	

	

public static void main(String args[])throws IOException{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int i,ch,pos;
boolean flag=false;

	Vector v=new Vector(5,2);


for(i=0;i<args.length;i++){
	v.addElement(args[i]);
}
 

do{
	System.out.println("1) Delete an item");
	System.out.println("2) Add an item to location");
	System.out.println("3) Add an item to end of list");
	System.out.println("4) Display Shopping list");
	System.out.println("5) Exit");
	ch=Integer.parseInt(br.readLine());
	switch (ch){
		case 1: System.out.println("Enter item to delete");
		 String del=br.readLine();
		 flag=v.removeElement(del);
		 if(flag==false)
		 {
			 System.out.println("Element not found ");
		 }
		 else{
			 System.out.println("Element Deleted");
             System.out.println("Shopping list:");
             break; 
		 }
		 case 2:
		 System.out.println("Enter item to add");
		 String a=br.readLine();
		 System.out.println("Enter location:");
		 pos=Integer.parseInt(br.readLine());
		 v.insertElementAt(a,pos);
		 break;
		 case 3:
		 System.out.println("Enter item to add");
		 String b=br.readLine();
		 v.addElement(b);
		 break;
		case 4:for(int j=0;j<v.size();j++){
		System.out.println(v.elementAt(j));
	    
		}
		break;
	}
}while(ch!=5);
}
}
