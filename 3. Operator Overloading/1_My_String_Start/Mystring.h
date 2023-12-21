# ifndef _MYSTRING_H_
# define _MYSTRING_H_

# include <iostream>
# include <string>

class Mystring {

    private:
        char *str;                            // A pointer pointing to a char[] that holds a C-style string
    
    public:

        Mystring();                                    // No arg Constructor
        Mystring(const char *s);                       // Overloaded Constructor
        Mystring(const Mystring &source);              // Copy Constructor
        ~Mystring();                                   // Destructor or Deconstructor

        void display() const;
        int get_length() const;
        const char *get_string() const;
};

# endif