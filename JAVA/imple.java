interface I1{
public int a=10;
public void f1();
public void f2();
}
abstract class A implements I1{public void fun(){System.out.println("absract");}
}
class B extends A{
public void f1(){
System.out.println("soham");}
public void f2(){
System.out.println("sohamddgdbv");}
}
public class imple{
	public static void main(String args[]){
		A b=new B();
		b.f1();
		I1 c=new A(){
	public void f1(){
	System.out.println("anony1");}
	public void f2(){
	System.out.println("anny2");}
		};

		((A)c).fun();

}
}
