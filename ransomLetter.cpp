#include <iostream>
#include <string>
#include <unordered_map>

bool RansomLetterFromPaper(const std::string ransomLetter, const std::string paper) 
{
    std::unordered_map<char, int> ransomLetterFreqs;
    std::unordered_map<char, int> paperFreqs;

    for (char c1 : ransomLetter) 
{
        ransomLetterFreqs[c1]++;
    }

    for (char c2 : paper)
    {
        paperFreqs[c2]++;
    }

    for (const auto& [letter, count] : ransomLetterFreqs)
    {
        if (paperFreqs[letter] < count) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    std::string ransomLetter = "noise";
    std::string paper = "economics";

    std::cout << "ransomLetter : " << ransomLetter << std::endl;
    std::cout << "paper : " << paper << std::endl;

    if (RansomLetterFromPaper(ransomLetter, paper)) 
    {
        std::cout << "TRUE" << std::endl;
    }
    else 
    {
        std::cout << "FALSE" << std::endl;
    }
}
