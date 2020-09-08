#pragma once

#include "exception" // Base class: std::exception

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {
        return "Illegal balance exception";
    }
};

