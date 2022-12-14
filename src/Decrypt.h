#include <string>
#include <iostream>
using namespace std;


void Decrypt(string word,string key, int size)
{
  //Iterates through each element of the word
  for(int i = 0; i < size; i++)
    {
      //Use the equation to apply the number of shifts to the starting letter of A
      word[i] = ((word[i] - key[i]%26) % 26) + 'A' ;
    }  
 //Print decrypted word
  cout << "Decrypted Word: " << word << endl;
}
