/*
 * File Name:               LoginServer.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise C
 * Lab section:             C01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         
 */
#include "LoginServer.h"
#include "User.h"
#include <iostream>
#include <string>
using namespace std;

LoginServer* LoginServer::instance = 0;

LoginServer::LoginServer() {  }

LoginServer::LoginServer(const LoginServer& src) {
    instance = LoginServer::getInstance();
    users = vector<User> (users);
}

LoginServer& LoginServer::operator=(const LoginServer& rhs) {
    if (this != &rhs) {
        instance = LoginServer::getInstance();
        users = vector<User> (users);
    }
    return *this;
}

LoginServer* LoginServer::getInstance(){ 
    if (instance == NULL) {
        instance = new LoginServer;
    }
    return instance;
}

void LoginServer::add(string username, string password) {
    struct User user;
    user.password = password;
    user.username = username;

    for (int i = 0; i < (int) users.size(); i++) {
        if (users.at(i).username.compare(username) == 0) {
            cout << "Username already exists, unable to add user!" << endl;
            return;
        }
    }
    users.push_back(user);
    cout << "User successfully added!" << endl;
}

User* LoginServer::validate(string username, string password) {
    for (int i = 0; i < (int) users.size(); i++) {
        if (users.at(i).username.compare(username) == 0 && users.at(i).password.compare(password) == 0){
            return &users.at(i);
        }
    }
    return 0;
}

