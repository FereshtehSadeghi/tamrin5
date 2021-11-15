// fereshteh sadeghi
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char str[1000];
    int words = 0;
    cout << "matn mored nazar ra vared konid: \n";
    cin.get(str, 1000);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }
    cout << "tedad kalamet :" << words + 1;
   }