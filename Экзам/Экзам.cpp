#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int len(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    int lenstr, lenstr2, i, j, end, end2, check;
    char str[1024];
    char str2[1024];
    cout << "Write 1 line" << endl;
    cin >> str;
    cout << "Write 2 line" << endl;
    cin >> str2;
    lenstr = len(str);
    lenstr2 = len(str2);
    end = -1;
    end2 = 0;
    check = 0;
    for (i = 0; i != lenstr; i++) 
    {
        
        for (j = 0; j != lenstr2; j++)
        {
            if (str[i] != str2[j]) 
            {
                end++;
            }
            if (str[i] == str2[j])
            {
                check++;
                break;
            }  
        }
        if (end == lenstr2) 
        { 
            break;
        }
        end = 0;
    }
    if (check == 0)
    {
        cout << "No matches";
        return 0;
    }
    cout << lenstr << endl;
    cout << "result := " << check << endl;
}
