import javax.swing.*;
import java.io.*;
import java.awt.event.*;
import java.awt.*;
public class guiframe2 extends JFrame implements ActionListener{
	JButton jb;
	JButton jb2;
	JLabel jl;
	public  guiframe2(){
		//JFrame jf = new JFrame();//create frame
		setLayout(null);		
		setVisible(true);
		setSize(1000,600);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jb = new JButton("BUTTON");// create button
		jb.setBounds(getSize().width/2 - 50,getSize().height/2 - 25,100,50);
		add(jb);
		jl = new JLabel();// for text 
		jl.setText("SOHAM :)");
		jl.setBounds(getSize().width/2 - 35,getSize().height/2 +30,100,20);
		add(jl);
		jb.addActionListener(this);
		jb2 = new JButton("BGCHANGE");
		jb2.setBounds(getSize().width/2 - 75,getSize().height/2 - 100,150,50);
		add(jb2);
		jb2.addActionListener(this);
	}
		public void actionPerformed(ActionEvent ae){
			if(ae.getSource()==jb2)
			getContentPane().setBackground(Color.BLUE);
			else if(ae.getSource()==jb){
				jl.setText("ME BADLAI GYO");
				jl.setSize(200,20);					
				}
			}
		
		public static void main(String []args){	
				guiframe2 gf = new guiframe2();	

	}
}


