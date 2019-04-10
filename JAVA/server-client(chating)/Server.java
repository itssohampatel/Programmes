import java.util.*;
import java.io.*;
import java.net.*;
public class Server{
	public static void main(String []args){
		try{ServerSocket ss = new ServerSocket(5555);
		Socket s1;
		Socket s2;
		DataInputStream in1,in2;
		DataOutputStream out1,out2;
		s1 = ss.accept();
		out1=new DataOutputStream(s1.getOutputStream());
		out1.writeUTF("1");
		in1=new DataInputStream(s1.getInputStream());
		s2 = ss.accept();
		out2=new DataOutputStream(s2.getOutputStream());
		out2.writeUTF("2");
		in2=new DataInputStream(s2.getInputStream());
		Thread th1 = new Thread(new Runnable(){
				public void run(){
					while(true){try{String str1 = in1.readUTF();
							if(str1.substring(0,1).equals("2"))
								out2.writeUTF("from SENDER 2:- "+str1.substring(2));
					}catch(Exception e){}}}
				});
		Thread th2 = new Thread(new Runnable(){
				public void run(){
					while(true){try{String str2 = in2.readUTF();
							if(str2.substring(0,1).equals("1"))
								out1.writeUTF("from SENDER 1:- "+str2.substring(2));
					}catch(Exception e){}}}
				});
		th1.start();
		th2.start();}catch(Exception e){}
}
}
		
		
		
