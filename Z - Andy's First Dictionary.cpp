#include<bits/stdc++.h>

int main() {
    std::set<std::string> words;  // Using a set to store distinct words
    std::string line;
    
    while (std::getline(std::cin, line)) {
        // Convert the line to lowercase
        std::transform(line.begin(), line.end(), line.begin(), [](unsigned char c) { return std::tolower(c); });
        
        std::string word;
        std::size_t start = 0, end;
        
        while (start < line.length()) {
            // Find the start of the next word
            while (start < line.length() && !std::isalpha(line[start]))
                ++start;
            
            // Find the end of the word
            end = start;
            while (end < line.length() && std::isalpha(line[end]))
                ++end;
            
            // Extract the word and add it to the set
            std::string currentWord = line.substr(start, end - start);
            if (!currentWord.empty())
                words.insert(currentWord);
            
            // Move to the next word
            start = end + 1;
        }
    }
    
    // Print the sorted distinct words
    for (const std::string& word : words) {
        std::cout << word << std::endl;
    }
    
    return 0;
}