import java.net.*;
import java.util.*;
import java.io.*;
public class Multicl{
	public static void main(String []args){
		try{
		Scanner sc = new Scanner(System.in); 
		Socket s = new Socket("127.0.0.1",5555);
		DataOutputStream out = new DataOutputStream(s.getOutputStream());
		DataInputStream in =new DataInputStream(s.getInputStream());
		System.out.println("Your Id is :- "+in.readUTF());
		Thread th1 = new Thread(new Runnable(){
				public void run(){
					while(true){try{out.writeUTF(sc.next());}catch(Exception e){}}}
					});
		Thread th2 = new Thread(new Runnable(){
				public void run(){
					while(true){try{System.out.println(in.readUTF());}catch(Exception e){}}}
				});
		th1.start();
		th2.start();}catch(Exception e){}
}
}
			
