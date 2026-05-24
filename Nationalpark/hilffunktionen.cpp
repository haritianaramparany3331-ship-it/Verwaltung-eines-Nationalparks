#include <fstream>

template <typename T>
void binaerSchreiben(std::ofstream &out, T &data){
    out.write((char*) &data, sizeof(T));
}

inline void stringBinaerSchreiben(std::ofstream &out, std::string &strData){
    size_t strDataSize = strData.size();
    out.write((char*) &strDataSize, sizeof(size_t));
    out.write(strData.c_str(), strDataSize);
}
template <typename T>
void binaerLesen(std::ifstream &in, T &data){
    in.read((char*) &data, sizeof(T));
}

inline void stringBinaerLesen(std::ifstream &in, std::string &string){
    size_t stringSize;
    in.read((char*) &stringSize, sizeof(size_t));
    string.resize(stringSize);
    in.read(&string[0], stringSize);
}
