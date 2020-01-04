import java.net.*;
import java.io.*;
import java.util.*;
// code :- create client for server-socket 
// public class SocketDemo{
// 	public static void main(String[] args){
// 			try{Socket s = new Socket("localhost",5555);
// 				DataOutputStream out = new DataOutputStream(s.getOutputStream());
// 				out.writeUTF("hello server !");
// 				out.flush();
// 				out.close();
// 				s.close();}catch(Exception e){System.out.println(e);}
// 	}
// }

//code:- multiple client
public class SocketDemo{
	public static void main(String[] args)throws Exception{
		Socket s = new Socket("localhost",5555);
		Scanner sc = new Scanner(System.in);
		DataOutputStream out = new DataOutputStream(s.getOutputStream());
		DataInputStream in = new DataInputStream(s.getInputStream());
		Thread th1 = new Thread(new Runnable(){
			public void run(){
				try{while(true){
					out.writeUTF(sc.nextLine());
				}}catch(Exception e){}
			}
		});
		Thread th2 = new Thread(new Runnable(){
			public void run(){
				try{while(true){
					System.out.println(in.readUTF());
				}}catch(Exception e){}
			}
		});		
		th1.start();
		th2.start();		
	}
}
