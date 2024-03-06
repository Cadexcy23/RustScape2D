#include <string>
#include "Chat.h"

struct chatBox {
	std::string currentText;
	std::string message1;
	std::string message2;
	std::string message3;
	std::string message4;
	std::string message5;
	std::string message6;
	std::string message7;
	std::string message8;
	std::string message9;
	std::string message10;
	std::string message11;
	std::string message12;
};

struct chatBox
	chatBox {
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
};


void Chat::sendMessage(std::string string)
{
	chatBox.message12 = chatBox.message11;
	chatBox.message11 = chatBox.message10;
	chatBox.message10 = chatBox.message9;
	chatBox.message9 = chatBox.message8;
	chatBox.message8 = chatBox.message7;
	chatBox.message7 = chatBox.message6;
	chatBox.message6 = chatBox.message5;
	chatBox.message5 = chatBox.message4;
	chatBox.message4 = chatBox.message3;
	chatBox.message3 = chatBox.message2;
	chatBox.message2 = chatBox.message1;
	chatBox.message1 = string;
}

void Chat::clearChatMessage()
{
	chatBox.currentText.clear();
}

void Chat::removeLetter()
{
	if (chatBox.currentText.length() > 0)
		chatBox.currentText.pop_back();
}

void Chat::addLetter(std::string string)
{
	chatBox.currentText.append(string);
}

std::string Chat::getChatText(int message)
{
	switch (message)
	{
	case 0:
		return chatBox.currentText;
		break;
	case 1:
		return chatBox.message1;
		break;
	case 2:
		return chatBox.message2;
		break;
	case 3:
		return chatBox.message3;
		break;
	case 4:
		return chatBox.message4;
		break;
	case 5:
		return chatBox.message5;
		break;
	case 6:
		return chatBox.message6;
		break;
	case 7:
		return chatBox.message7;
		break;
	case 8:
		return chatBox.message8;
		break;
	case 9:
		return chatBox.message9;
		break;
	case 10:
		return chatBox.message10;
		break;
	case 11:
		return chatBox.message11;
		break;
	case 12:
		return chatBox.message12;
		break;
	}
	
}