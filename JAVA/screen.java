import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
public class screen extends JFrame{
	public screen(){
		setSize(600,600);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(null);
	}
	public void paint(Graphics g){
		g.setColor(Color.decode("#00ff00"));
		g.fillRect(100,100,10,10);
	}
	public static void main(String args[]){
		screen s=new screen();
	}
}
