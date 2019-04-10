import java.net.*;
import java.util.*;
import java.io.*;
public class chat{
	public static void main(String []args){
		try{Scanner sc = new Scanner(System.in);
		String Name=sc.next();
		String who[]={""};
		Socket s; 
		if(Name.equals("client")){
			System.out.println("Waiting for Client !!");
			System.out.println("Client ready for chat :) ");
			System.out.println("Start your converstation");
			s=new  Socket("127.0.0.1",5555);
			who[0]="client";}
		else{
			System.out.println("waiting for creating server !!");
			System.out.println("Now Server is ready :)");
			ServerSocket ss = new ServerSocket(5555);
			s = ss.accept();
			System.out.println("Start your converstation");	
			who[0]="server";
		}
		DataOutputStream out = new DataOutputStream(s.getOutputStream());
		DataInputStream in =new DataInputStream(s.getInputStream());
		Thread th1 = new Thread(new Runnable(){
				public void run(){
					while(true){try{out.writeUTF(sc.next());}catch(Exception e){}}}
					});
		Thread th2 = new Thread(new Runnable(){
				public void run(){
					FileOutputStream fos=null;
					try{
					        fos = new FileOutputStream("asd.txt",true);
					}catch(Exception e){}	          
					while(true){try{
						String str = in.readUTF();
						fos.write((who[0]+" = "+str+"\n").getBytes());	
						System.out.println("SENDER :- "+str);}catch(Exception e){}}}                                 
				});
		th1.start();
		th2.start();}catch(Exception e){}	
}
}
			




