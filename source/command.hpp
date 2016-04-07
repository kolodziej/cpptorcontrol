#ifndef _COMMAND_HPP
#define _COMMAND_HPP

#include <string>
#include <ostream>

namespace torcontrol {

class Command
{
private:
	std::string m_command_;
	std::vector<std::string> m_arguments_;
	std::string m_data_;
	bool m_multiline_;

public:
	Command(std::string command,
					std::vector<std::string> arguments = {},
					std::string data = std::string(),
					bool multiline = false) :
		m_command_(command),
		m_arguments_(arguments),
		m_data_(data),
		m_multiline(multiline)
	{}
	
	friend std::ostream& operator<<(std::ostream& stream, const Command& cmd);
};

} // namespace torcontrol

std::ostream& operator<<(std::ostream& stream, const Command& cmd);

#define _COMMAND_HPP
