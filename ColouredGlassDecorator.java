/**
 * File Name:               ColouredGlassDecorator.java
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise A and B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

import java.awt.*;

public class ColouredGlassDecorator extends Decorator {
    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {
        this.cmp.draw(g);

        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.yellow);
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1 * 0.1f));
        g2d.fillRect(25, 25, 110, 110);
    }
}
