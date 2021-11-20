/*
 * File Name:               Client_B.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise C
 * Lab section:             C01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         
 */
#include "User.h"
#include "LoginServer.h"
#ifndef CLIENT_B_H
#define CLIENT_B_H

class Client_B {

public:
    Client_B();
    //  PROMISES: constructor of Client_B object and initializes its data member

    Client_B(const Client_B& src);
    //  REQUIRES: source to refer Client_B object
    //  PROMISES: constructor of new Client_B object and sets its instance data member to LoginServer

    Client_B& operator = (const Client_B& rhs);
    //  REQUIRES: rhs will refer to a Client_B's object
    //  PROMISES: copy and assign the data members of the rhs object to the Client_B

    void add(string username, string password);
    //  REQUIRES: username and password of Client_B
    //  PROMISES: add a new user of Client_B to list 

    User* validate(string username, string password);
    //  PROMISES: returns a pointer based on passed arguments

private:
    LoginServer* instance;
};

#endif