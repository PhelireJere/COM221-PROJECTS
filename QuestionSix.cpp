#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>

int countVowels(const std::string& str){
    int count = 0;
    for(char c : str){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
     return count;
}

int countWords(const std::string& str){
    int count = 0;
    std::string word;
    std::stringstream ss(str);
    while(ss >> word){
        count++;
    }

    return count;
}

std::string reverseString(const std::string& str){
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string
capitalizeSecondLetter(const std::string& str){
    std::string result;
    std::string word;
    std::stringstream ss(str);
    while (ss >> word){
        if(word.length () > 1){
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result;
}

int main(){
    std::ifstream
    file("textfile.txt");
    std::string fileData;
    if (file.is_open()){
        file >> fileData;
        file.close();
    }
    else{
        std::cerr << "Unable to open file";
        return 1;
    }

    int numVowels = countVowels(fileData);
    std::cout << "Number of vowels: " << numVowels << std::endl

    int numWords = countWords(fileData);
    std::cout << "Numbeer of words: " << numWords << std::endl;

    std::string reversed = reverseString(fileData);
    std::cout << "Reversed text: " << reversed << std::endl;

    std::string capitalized = capitalizeSecondLetter(fileData);
    std::cout << "Capitalized text: " << capitalized << std::endl;

    return 0;
}