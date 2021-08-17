import java.awt.*;
import java.awt.event.*;

public class MyWindow_interface extends Frame implements WindowListener{
	public void windowActivated(WindowEvent e){	}
	public void windowClosed(WindowEvent e){	}
	public void windowClosing(WindowEvent e){  System.exit(0);	}
	public void windowDeactivated(WindowEvent e){	}
	public void windowDeiconified(WindowEvent e){	}
	public void windowIconified(WindowEvent e){	}
	public void windowOpened(WindowEvent e){	}
    public static void main(String[] args) {
    	MyWindow_interface mw=new MyWindow_interface();
    	mw.setVisible(true);
    	mw.setBounds(100,100,350,500);
    	mw.addWindowListener(mw);
    }
}
