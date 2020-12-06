#include <iostream>
#include <random>
#include <string.h>

struct Data { std::string s1; int n; std::string s2; };

char *random_string(std::size_t length)
{
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    char *random_string = new char[length + 1];

    for (std::size_t i = 0; i < length; ++i)
    {
        random_string[i] = CHARACTERS[distribution(generator)];
    }
    random_string[length] = 0;
    return random_string;
}

void * serialize(void)
{
    char *s1 = random_string(8);
    char *s2 = random_string(8);
    int n = rand();
    unsigned char *ret = new unsigned char[20];
    std::cout << "Serialized datas :\ns1 : " << s1 << "\ns2 : " << s2 << "\nn : " << n << "\n";

    for (int i=0; i<8; i++)
        ret[i] = s1[i];

    ret[8] = (n >> 24);
    ret[9] = (n >> 16);
    ret[10] = (n >> 8);
    ret[11] = n;

    for (int i=0; i<8; i++)
        ret[i+12] = s2[i];
    return ret;
}

Data * deserialize(void * raw)
{
    std::string strRaw = (char *)raw;
    unsigned char *charRaw = (unsigned char *)raw;
    Data *ret = new Data;

    ret->s1 = strRaw.substr(0, 8);
    ret->s2 = strRaw.substr(12, 8);

    ret->n = (charRaw[8] << 24) | (charRaw[9] << 16) | (charRaw[10] << 8) | charRaw[11];;

    return ret;
}

int main()
{
    std::cout << "Welcome in this serialization program !\n\n";
    std::cout << "Serialize some data...\n";
    void *raw = serialize();
    std::cout << "Serialized bytes heap address :" << raw << "\n";
    std::cout << "Deserialize the data...\n";
    Data *deserData = deserialize(raw);
    std::cout << "Deserialized datas :\ns1 : " << deserData->s1 << "\ns2 : " << deserData->s2 << "\nn : " << deserData->n << "\n";
    std::cout << "\nSerialize some new data...\n";
    void *raw2 = serialize();
    std::cout << "Serialized bytes heap address :" << raw2 << "\n";
    std::cout << "Deserialize the data...\n";
    Data *deserData2 = deserialize(raw2);
    std::cout << "Deserialized datas :\ns1 : " << deserData2->s1 << "\ns2 : " << deserData2->s2 << "\nn : " << deserData2->n << "\n";
}