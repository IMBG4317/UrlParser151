URL Parser C++151

A Uniform Resource Locator (URL) is the standard way of representing content on the internet. Actually URLs areused for describing the location of many kinds of resources. URLs are strings composed of several differentcomponents:
The
scheme
which is a sequence of characters followed by a
:
symbol.
The
authority
which begins with a
//
and contains all the character up to but not including another
/
character
The
path
which begins with a
/
character and contains everything else in the URL
Note: This is a simplification, URLs are a bit more intricate than this. You can see the full specification at
rfc3986
.
For example, the URL
https://example.com/
would be broken down as:
scheme = https:
authority = //example.com
path = /
Likewise
https://www.highline.edu/about-us/
would be broken down as:
scheme = https:
authority = //www.highline.edu
path = /about-us/
Project Requirements
For this assignment you will familiarize yourself with using the functions built into the standard library forworking with
std::string
objects and use them to break down URLs into their component parts.
You will write a program that asks the user to input a URL as a
std::string
object, and then prints out thecomponent parts to the console similar to the examples above.
You may assume that when I am testing your code, I will only use well-formed URLs which have all threecomponents present. For instance I will not test
http://example.com
because it is missing the
path
component.I would also not test
http:///hello
, or
//c/ProgramData/Information
as these are likewise missing the
authority
and
scheme
respectively.
Part of this project involves using the internet to look up which functions are available to you and how you mightuse them. A good place to start is
CPPReference: std::basic_string
.
example output:
Please enter a URL: https://example.com/some/path/to/file.txt
scheme = https:
authority = //example.com
path = /some/path/to/file.txt
