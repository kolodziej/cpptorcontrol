#include "command.hpp"

std::ostream& operator<<(std::ostream& stream, const Command& cmd)
{
	if (m_multiline_)
		stream << "+" << m_command_ << " ";
	else
		stream << m_command_ << " ";

	for (std::string arg : m_arguments_)
	{
		stream << arg << " ";
	}

	if (m_multiline_)
		stream << "\r\n" << m_data_ << "\r\n.\r\n";
	
	return stream;
}

