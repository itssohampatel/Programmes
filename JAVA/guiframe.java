import javax.swing.*;
import java.io.*;
import java.awt.event.*;
import java.awt.*;
public class guiframe{
	public static void main(String []args){
		JFrame jf = new JFrame();//create frame
		jf.setVisible(true);
		jf.setSize(1000,600);
		jf.setLayout(null);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		JButton jb = new JButton("BUTTON");// create button
		jb.setBounds(jf.getSize().width/2 - 50,jf.getSize().height/2 - 25,100,50);
		jf.add(jb);
		JLabel jl = new JLabel();// for text 
		jl.setText("SOHAM :)");
		jl.setBounds(jf.getSize().width/2 - 35,jf.getSize().height/2 +30,100,20);
		jf.add(jl);
		jb.addActionListener(new ActionListener(){ // handle the buttton click event
				public void actionPerformed(ActionEvent ae){
					jl.setText("ME BADLAI GYO");
					jl.setSize(200,20);					
					}
					});
		JButton jb2 = new JButton("BGCHANGE");
		jb2.setBounds(jf.getSize().width/2 - 75,jf.getSize().height/2 - 100,150,50);
		jf.add(jb2);
		jb2.addActionListener(new ActionListener(){
				public void actionPerformed(ActionEvent ae){
					jf.getContentPane().setBackground(Color.BLUE);					
					}
					});
				

	}
}


