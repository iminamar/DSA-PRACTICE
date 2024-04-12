#include <iostream>
#include <cstring> // for strlen, strcpy
using namespace std;

class String
{
private:
    char *data;       // pointer to character array holding the string
    unsigned int len; // length of the string

public:
    // Default constructor
    String() : data(nullptr), len(0) {}

    // Parameterized constructor
    String(const char *ch) : len(strlen(ch))
    {
        data = new char[len + 1]; // allocate memory for the string
        strcpy(data, ch);         // copy the input string to data
    }

    // Copy constructor
    String(const String &str) : len(str.len)
    {
        data = new char[len + 1]; // allocate memory for the new string
        strcpy(data, str.data);   // copy the string from str to data
    }

    // Destructor
    ~String()
    {
        delete[] data; // deallocate memory
    }

    // Copy assignment operator
    String &operator=(const String &str)
    {
        if (this != &str)
        {                             // check for self-assignment
            delete[] data;            // deallocate existing memory
            len = str.len;            // update length
            data = new char[len + 1]; // allocate memory for the new string
            strcpy(data, str.data);   // copy the string from str to data
        }
        return *this; // return the updated string
    }

    // Getter function to get the length of the string
    unsigned int length() const
    {
        return len;
    }

    // Overloading the << operator for easy printing
    friend ostream &operator<<(ostream &os, const String &str)
    {
        os << str.data; // output the string
        return os;
    }
};

int main()
{
    // Creating String objects
    String s1;           // Operation: default constructor
    String s2 = "Hello"; // Operation: parameterized constructor

    // Copy constructor
    String s3(s2); // Operation: copy constructor

    // Copy assignment operator
    String s4;
    s4 = s3; // Operation: copy assignment operator

    // Getting the length of a string
    cout << "Length of s2: " << s2.length() << endl; // Operation: length()

    // Printing strings
    cout << "s1: " << s1 << endl; // Operation: operator<<
    cout << "s2: " << s2 << endl; // Operation: operator<<
    cout << "s3: " << s3 << endl; // Operation: operator<<
    cout << "s4: " << s4 << endl; // Operation: operator<<

    // Concatenating strings
    String s5 = " World";
    s2 = s2 + s5; // Operation: operator+

    // Printing the concatenated string
    cout << "s2 after concatenation: " << s2 << endl;

    // Checking equality of strings
    if (s3 == s4) // Operation: operator==
        cout << "s3 and s4 are equal" << endl;
    else
        cout << "s3 and s4 are not equal" << endl;

    // Modifying a string
    s1 = "New String"; // Operation: parameterized constructor, copy assignment operator

    // Printing the modified string
    cout << "s1 after modification: " << s1 << endl;

    // Deleting a string
    // No explicit operation needed, the destructor is automatically called when the object goes out of scope

    return 0;
}

// Implementation of strlen function
size_t strlen(const char *str)
{
    size_t length = 0; // Initialize the length counter

    // Loop until the null terminator is encountered
    while (str[length] != '\0')
    {
        length++; // Increment the length counter
    }

    return length; // Return the calculated length
}

// Implementation of strcpy function
char *strcpy(char *destination, const char *source)
{
    char *original_destination = destination; // Store the original destination pointer

    // Copy characters from source to destination until null terminator is encountered
    while (*source != '\0')
    {
        *destination = *source; // Copy character from source to destination
        destination++;          // Move to the next character in destination
        source++;               // Move to the next character in source
    }

    *destination = '\0';         // Append null terminator to the end of destination string
    return original_destination; // Return the pointer to the beginning of destination string
}
