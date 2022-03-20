#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

int main(int argc, const char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " filename search_term\n"
            "Prints offsets where search_term is found in file.\n";
        return 1;
    }

    const char* filename = argv[1];
    const char* search_term = argv[2];
    size_t search_term_size = strlen(search_term);

    std::ifstream file(filename, std::ios::binary);
    if (file)
    {
        file.seekg(0, std::ios::end);
        size_t file_size = file.tellg();
        file.seekg(0, std::ios::beg);
        std::string file_content;
        file_content.reserve(file_size);
        char buffer[16384];
        std::streamsize chars_read;

        while (file.read(buffer, sizeof buffer), chars_read = file.gcount())
            file_content.append(buffer, chars_read);

        if (file.eof())
        {
            for (std::string::size_type offset = 0, found_at;
                 file_size > offset &&
                 (found_at = file_content.find(search_term, offset)) !=
                                                            std::string::npos;
                 offset = found_at + search_term_size)
                std::cout << found_at << std::endl;
        }
    }
}


