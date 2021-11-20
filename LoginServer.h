/*
 * File Name:               LoginServer.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise C
 * Lab section:             C01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         
 */
#include <vector>
#include "User.h"
#ifndef LOGIN_SERVER_H
#define LOGIN_SERVER_H

class LoginServer{
    
public:
    static LoginServer* getInstance();
    //  PROMISES: returns single instance of LoginServer

    void add(string username, string password);
    //  REQUIRES: username and password
    //  PROMISES: add new users as per the given arguments


    User* validate(string username, string password);
    //  REQUIRES: username and password
    //  PROMISES: returns pointer as per the arguments
    
private:
    LoginServer();
    //  PROMISES: constructor to create new LoginServer object

    LoginServer(const LoginServer& src);
    //  REQUIRES: source refrence to other object 
    //  PROMISES: create copy of object 

    LoginServer& operator = (const LoginServer& rhs);
    //  REQUIRES: rhs reference to refer object of LoginServer
    //  PROMISES: copy and assign the data members of the rhs object to the LoginServer
    
    vector<User> users;
    static LoginServer* instance; 
};

#endif