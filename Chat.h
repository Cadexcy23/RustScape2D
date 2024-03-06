#pragma once
class Chat {
public:
	void sendMessage(std::string string);
	void clearChatMessage();
	void removeLetter();
	void addLetter(std::string);
	std::string getChatText(int message);
};