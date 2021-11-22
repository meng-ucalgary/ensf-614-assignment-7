/*
 * File Name:               Client_A.hpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise C
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

#include "User.hpp"
#include "LoginServer.hpp"
#ifndef CLIENT_A_H
#define CLIENT_A_H

class Client_A
{
public:
    Client_A();
    //  PROMISES: constructor of Client_A object and initializes its data member

    Client_A(const Client_A &src);
    //  REQUIRES: source to refer Client_A object
    //  PROMISES: constructor of new Client_A object and sets its instance data member to LoginServer

    Client_A &operator=(const Client_A &rhs);
    //  REQUIRES: rhs will refer to a Client_A's object
    //  PROMISES: copy and assign the data members of the rhs object to the Client_A

    void add(string username, string password);
    //  REQUIRES: username and password of Client_A
    //  PROMISES: add a new user of Client_A to list

    User *validate(string username, string password);
    //  PROMISES: returns a pointer based on passed arguments

private:
    LoginServer *instance;
};

#endif