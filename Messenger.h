#ifndef MESSENGER_H
#define MESSENGER_H

//
//  File:         Messenger.h
//
//  Author:       Brendan Nash & Neil Peterson
//
//  Description:  A class definition for Messenger.
//

#include "Message.h"
#include <iostream>
#include <string>
#include <vector>

class Messenger {


public:
	Messenger();
	~Messenger();
	void listMessages();
	Message* find(Message*);
	void displayMessage();
	void addMessage();
	void deleteMessage();
	
private:
	std::string read;
	std::string unread;
};

#endif