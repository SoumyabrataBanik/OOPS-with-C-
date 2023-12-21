# include <bits/stdc++.h>
# include "Mystring.h"

int main() {

    Mystring empty;                                     // No args Constructor
    Mystring larry("Larry");                            // Overloaded Constructor
    Mystring stooge {larry};                            // Copy Constructor

    empty.display();        
    larry.display();        
    stooge.display();       

    return 0;
}