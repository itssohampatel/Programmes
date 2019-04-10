class A extends Thread{
public void run(){
	for(int i=0;i<=9;i++)
		System.out.println("A "+i);

}
}
class B implements Runnable{
public void run(){
	for(int i=0;i<=9;i++)
		System.out.println("B "+i);

}
}
public class thread{
	public static void main(String args[]){
		A a=new A();		
		B b=new B();
		Thread b1= new Thread(b);
		a.start();
		b1.start();
                try{
		b1.join();
		}catch(Exception e){}
		Thread A1= new Thread(new Runnable(){
		public void run(){System.out.println("run");}});
		A1.start();	
		for(int i=0;i<=15;i++)
		System.out.println("main "+i);
}
}
