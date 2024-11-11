#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
	
    ofstream file_ma_lekh;// creates file and write stuffs in it
	file_ma_lekh.open("sentence.txt");
    file_ma_lekh << sentence;
    file_ma_lekh.close();

    // Read the sentence back from the file
    ifstream file_ma_herr("sentence.txt");// reads the file only

    string file;
    getline(file_ma_herr, file); // Read the content of the file
    file_ma_herr.close();

    int vowelCount = 0;
    for (int i = 0; i < file.length(); i++) 
	{
        char ch = (file[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'
		||ch == 'O'||ch == 'U') 
		{
            vowelCount++;
        }
    }
    cout << "The number of vowels in the sentence is: " << vowelCount << endl;

    return 0;
}

