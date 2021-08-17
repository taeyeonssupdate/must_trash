import java.awt.*;
import java.awt.event.*;

class MyListener extends WindowAdapter{
	public void windowClosing(WindowEvent e){  System.exit(0);	}
}

public class MyWindow_abstract extends Frame{

    public static void main(String[] args) {
    	MyWindow_abstract mw=new MyWindow_abstract();
    	mw.setVisible(true);
    	mw.setBounds(100,100,350,500);
    	mw.addWindowListener(new MyListener());
    }
}
