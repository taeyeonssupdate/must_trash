import java.awt.*;
import java.awt.event.*;

class MyListener extends MyWindow_1 implements WindowListener {

    MyListener(){
        f.addWindowListener(this);
        f.setSize(300,400);
        f.setVisible(true);
    }
    public void windowOpened(WindowEvent e){}
    public void windowClosing(WindowEvent e){
        System.exit(0);
    }
    public void windowClosed(WindowEvent e){}
    public void windowIconified(WindowEvent e){}
    public void windowDeiconified(WindowEvent e){}
    public void windowActivated(WindowEvent e){}
    public void windowDeactivated(WindowEvent e){}
}

public class MyWindow_1 {

    Frame f = new Frame();

    public static void main(String[] args) {
        new MyListener();
    }

}