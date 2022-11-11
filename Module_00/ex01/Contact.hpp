#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
private:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_darkestSecret;

public:
	Contact();
	~Contact();

	std::string getFirstName() const;
	void setFirstName(const std::string &firstName);

	std::string getLastName() const;
	void setLastName(const std::string &lastName);

	std::string getNickname() const;
	void setNickname(const std::string &nickname);

	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);

	std::string getDarkestSecret() const;
	void setDarkestSecret(const std::string &darkestSecret);
};


#endif