import java.net.*;
import java.io.*;
import java.util.*;
//code :- create server for server-client 
// public class ServerSDemo{
// 	public static void main(String[] args){
// 		try{ServerSocket ss = new ServerSocket(5555);
// 			Socket s = ss.accept();
// 			DataInputStream in = new DataInputStream(s.getInputStream());
// 			System.out.println("message :- "+in.readUTF());
// 			ss.close();}catch(Exception e){System.out.println(e);}
// 	}
// }

// code :- client and server in same code
// public class ServerSDemo{
// 	public static void main(String[] args)throws Exception{
// 		System.out.println(args[0]);
// 		Socket s;
// 		if(args[0].equals("server")){
// 		ServerSocket ss = new ServerSocket(5555);
// 		s=ss.accept();}
// 		else{
// 		s = new Socket("localhost",5555);}
// 		Scanner sc = new Scanner(System.in);
// 		final DataInputStream in = new DataInputStream(s.getInputStream());
// 		final DataOutputStream out = new DataOutputStream(s.getOutputStream());
// 		Thread th1 = new Thread(new Runnable(){
// 			public void run(){
// 					while(true){try{String st = in.readUTF();
// 					System.out.println("client:-"+st);}catch(Exception e){}}
// 			}
// 		});
// 		Thread th2 = new Thread(new Runnable(){
// 			public void run(){
// 					while(true){try{out.writeUTF(sc.nextLine());
// 					}catch(Exception e){}}
// 			}
// 		});

// 		th1.start();
// 		th2.start();
// 	}
// }

//code:- multiple client
public class ServerSDemo{
	public static void main (String[] args) throws Exception{
		ArrayList<DataOutputStream> dout = new ArrayList<>();
		ServerSocket ss = new ServerSocket(5555);
		final int j[] ={-1};
		Thread th1 = new Thread(new Runnable(){
			public void run(){
				try{while(true){
					Socket s = ss.accept();
					j[0]++;
					DataInputStream in = new DataInputStream(s.getInputStream());
					DataOutputStream out = new DataOutputStream(s.getOutputStream());
					dout.add(out);
					int t=j[0];
					Thread th2 = new Thread(new Runnable(){
						public void run(){
							try{while(true){
								String st = in.readUTF();
								int i = Integer.parseInt(st.substring(0,1));
								System.out.println("From "+t+" TO "+st);
								dout.get(i).writeUTF("From "+t+":-"+st.substring(2));
							}}catch(Exception e){e.printStackTrace();}
						}
					});
					th2.start();
				}}catch(Exception e){e.printStackTrace();}
			}
		});
		th1.start();
	}
}

