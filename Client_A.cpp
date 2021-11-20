
/*
 * File Name:               Client_A.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise C
 * Lab section:             C01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         
 */
#include "User.h"
#include "Client_A.h"
#include <iostream>
using namespace std;

Client_A::Client_A() {
    instance = LoginServer::getInstance();
}

Client_A::Client_A(const Client_A& src) {
    instance = LoginServer::getInstance();
}

Client_A& Client_A::operator = (const Client_A& rhs) {
    if (this != &rhs) {
        instance = LoginServer::getInstance();
    }
    return *this;
}

void Client_A::add(string username, string password) {
    instance->add(username, password);
}

User* Client_A::validate(string username, string password) {
    User* foundUser = instance->validate(username, password);
    return foundUser;
}
