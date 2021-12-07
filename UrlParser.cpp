/*
Created by: Brian Milan-G
Assignment: URL Parser
Created for CSCI 151
*/

#include <iostream>
#include <string>
using namespace std;
//#include "UrlParser.h"
//#include "main.cpp"

struct userURL { //blueprint serving as a model 
    string website;
    string url; 
    string scheme;
    string authority;
    string path;
};

void printURL(userURL website)
{
    cout << "url: " << website.url << endl;
    cout << "scheme: " << website.scheme << endl;
    cout << "authority: " << website.authority << endl;
    cout << "path: " << website.path << endl;
}

int main()
{
    userURL website;
    website.url = "http://example.com/1";
    website.scheme = "http:";
    website.authority = "//example.com";
    website.path = "/1";

    
    cout << "Please enter a URL: ";
    cin >> website.url;
  
 printURL(website);


    system("pause>0");  

};

 


