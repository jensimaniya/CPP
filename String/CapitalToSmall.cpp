#include <iostream>
#include <string>
using namespace std;

string toggleFirstLetterCase(string sentence) 
{
  for (int i = 0; i < sentence.length(); i++) 
  {
    // Check if it's the start of a word
    if ((i == 0 || isspace(sentence[i - 1])) && isalpha(sentence[i]))
     {
      if (isupper(sentence[i]))                                                               
      {
        sentence[i] = tolower(sentence[i]); // Convert to lowercase
      } 
      else 
      {
        sentence[i] = toupper(sentence[i]); // Convert to uppercase
      }
    }
  }
  return sentence;
}

int main() {
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);

  string result = toggleFirstLetterCase(sentence);
  cout << "Modified sentence: " << result << endl;

  return 0;
}
