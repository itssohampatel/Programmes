import java.util.*;
public class Datast{
	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		List<String> lw = new ArrayList<String>();
		while(true)
			{
				String st = sc.next();		
				if(st.equals("\\"))break;	
				lw.add(st);
			}
		Collections.sort(lw);
		System.out.println("YOUR VALUES IS :- ");
			for(int i=0;i<lw.size();i++)System.out.println(lw.get(i));

	}
}		
