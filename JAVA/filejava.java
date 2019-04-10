import java.io.*;
/*public class filejava{
	public static void main(String args[]){try{
	File a=new File("tet.txt");
	if(!a.exists())a.createNewFile();
	BufferedReader br= new BufferedReader(new InputStreamReader(new FileInputStream(a)));	
	String s=br.readLine();
	
	System.out.println(s);
	}catch(Exception e){System.out.println(e.getMessage());}
}
}*/
public class filejava{
	public static void main(String args[]){try{
	File a=new File("tet.txt");
	BufferedWriter wr=new BufferedWriter(new OutputStreamWriter(new FileOutputStream(a,true)));
	wr.write("kehwfwffuiwnkwnuiwwfuih ui");
	wr.close();
	}catch(Exception e){System.out.println(e.getMessage());}
} 
}
