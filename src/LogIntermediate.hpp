#pragma once
#include <source_location>
#include <string_view>

namespace al
{
    class LogIntermediate
    {
    public:
        LogIntermediate(const std::string_view formatString);
        LogIntermediate(const char* formatString);
        LogIntermediate(const std::string& formatString);
        virtual ~LogIntermediate() = default;

        const std::string_view FormatString() const;
    private:
        const std::string_view m_FormatString;
    };
}