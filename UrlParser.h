/*
header file
*/

#include <string> 

struct url_parser(){
//Get the string, with the last character is :
    scheme = URL.substr(0,URL.find(':') + 1);
    //Get the authority from excluding scheme at the beginning and look for the / signified the end
    authority = URL.substr(scheme.length(),
    URL.find("/", scheme.length() + 2) - scheme.length());
}