#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string) //constructor 
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, string, m_Size+1); 
    }

    String(const String& other) : m_Size(other.m_Size) 
    {
        cout<< "copied string "<<endl;
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, other.m_Buffer, m_Size+1);
    }
 
    ~String()  //destructor m_buffer is initialized as a heap and heaps need to be manually deleted.
    {
        delete m_Buffer;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }


    friend ostream& operator<<(ostream& stream, const String& string); //friend allows you to access private variable m_buffer in the overloading funciton below

};

ostream& operator<<(ostream& stream, const String& string)   //overloading '<<' operator to cout the string as if it was int or char
{
    stream << string.m_Buffer;
    return stream;
}

int main(){

    String string = "Venks";
    String second = string;
    second[3] = 'v';
    cout << string << endl;
    cout << second << endl;
    return 0;
  }