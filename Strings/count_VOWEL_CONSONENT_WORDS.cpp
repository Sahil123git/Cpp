#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int vowel = 0, consonents = 0, words = 1;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'u' || str[i] == 'U')
        {
            vowel++;
        }
        if (str[i] == ' ')
        {
            if (i != 0 && str[i - 1] != ' ' && str[i + 1] != ' ')
            {
                words++;
            }
            if (i != 0 && str[i - 1] != ' ' && str[i + 1] == ' ')
            {
                words++;
            }
            if (i == 0)
            {
                words = 1;
            }
        }
        if ((str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) && (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'O' && str[i] != 'o' && str[i] != 'u' && str[i] != 'U'))
        {
            consonents++;
        }
    }
    cout << "words ->" << words << endl;
    cout << "consonents ->" << consonents << endl;
    cout << "vowel ->" << vowel << endl;
    
    return 0;
}