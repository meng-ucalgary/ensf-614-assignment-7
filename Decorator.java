/**
 * File Name:               Decorator.java
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise A and B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

public abstract class Decorator implements Component {
    protected Component cmp;
    protected int x;
    protected int y;
    protected int width;
    public int height;
}
