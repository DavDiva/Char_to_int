#include <iostream>
using namespace std;
int char_to_int(const char symbol)
{
    return symbol;
}

int main()

{
    char symbol = '^';
    cout<< char_to_int(symbol)<<endl;
    /*char symbol = '%';
    cout << (int)symbol << endl;*/
    /*for (int i = 0; i <= 255; i++) 
    {
        cout << "Code: " << i << "\t" << "char symbol: " << (char)i << endl;
    }*/
    return 0;
}

