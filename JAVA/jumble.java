import java.util.*;
public class jumble{
	public static void main(String []args){
		Thread trd=new Thread(new Runnable(){
			public void run(){
				while(true){
					try{
						Thread.sleep(200);
						System.out.print("\rstarting..|   ");
						Thread.sleep(200);
						System.out.print("\rstarting../   ");
						Thread.sleep(200);  
						System.out.print("\rstarting..-   ");
						Thread.sleep(200);
						System.out.print("\rstarting..\\   ");
						Thread.sleep(200);
						System.out.print("\rstarting..-   ");
					}catch(Exception e){}
				}
			}
		});
		trd.start();
	}
}
