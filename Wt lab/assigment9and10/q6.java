import java.applet.*;
import java.awt.*;

public class q6 extends Applet {
 public void paint(Graphics g) {
  g.drawRect(10, 150, 50, 100);
  g.drawRoundRect(70, 150, 50, 100, 10, 10);
  g.setColor(Color.orange);
  g.fill3DRect(130, 150, 50, 100, true);
 }
}
/*
 *  * <applet code ="q6.class" width=600 height=600>
 *  * </applet>
 *  
 */