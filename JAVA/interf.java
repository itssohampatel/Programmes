import java.util.Scanner;
interface shr{
	public void takeName();
	public void display();
}
class Student implements shr{
	private String name;
	public void takeName(){
		Scanner sc= new Scanner(System.in);
		name=sc.next();}
	public void display(){
		System.out.println(name);}
}
public class interf{
	public static void main(String []args){
		Student st1= new Student();
		st1.takeName();
		st1.display();
}
}
