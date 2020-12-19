// C++ program to censor a word
// with asterisks in a sentence
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

// Function takes two parameter
string censor(string text,
              string word)
{

    // Break down sentence by ' ' spaces
    // and store each individual word in
    // a different list
    vector<string> word_list;
    boost::split(word_list, text, boost::is_any_of("\\ +"));

    // A new string to store the result
    string result = "";

    // Creating the censor which is an asterisks
    // "*" text of the length of censor word
    string stars = "";
    for (int i = 0; i < word.size(); i++)
        stars += '*';

    // Iterating through our list
    // of extracted words
    int index = 0;
    for (string i : word_list)
    {

        if (i.compare(word) == 0)
        {

            // changing the censored word to
            // created asterisks censor
            word_list[index] = stars;
        }
        index++;
    }

    // join the words
    for (string i : word_list)
    {
        result += i + ' ';
    }
    return result;
}

// Driver code
int main()
{
    string extract = "GeeksforGeeks is a computer science "
                     "portal for geeks. I am pursuing my "
                     "major in computer science. ";
    string cen = "computer";
    cout << (censor(extract, cen));
}
