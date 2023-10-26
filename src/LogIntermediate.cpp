#include "LogIntermediate.hpp"

namespace al
{
    LogIntermediate::LogIntermediate(const std::string_view formatString) :
        m_FormatString(formatString)
    {
        
    }

    LogIntermediate::LogIntermediate(const char* formatString) :
        m_FormatString(formatString)
    {

    }

    LogIntermediate::LogIntermediate(const std::string &formatString) :
        m_FormatString(formatString)
    {

    }

    const std::string_view LogIntermediate::FormatString() const
    {
        return m_FormatString;
    }
}
