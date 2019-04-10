import java.io.*;
public class file{
	public static void main(String args[]){try{
		File f = new File("/root/Documents/JAVA/asd.txt");
		if(!f.exists())f.createNewFile();
		//BufferedReader read=new BufferedReader(new FileReader(f));
		String str;
//		PrintWriter pw = new PrintWriter(f);
	//	pw.println("abcdefgh");
		FileOutputStream fos = new FileOutputStream("nasgvdgna",true);
		fos.write(sockin.readUTF().getBytes());		
		/*while((str=read.readLine())!=null){
			System.out.println(str);
		}*/
		}catch(Exception e){e.printStackTrace();}
	}
}
