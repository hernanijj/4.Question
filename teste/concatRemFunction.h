#include <iostream>


bool checkLower(std::string var_text)
{
// ensures that all text is lowercase
   for (char ch: var_text)
    {
        if(ch != ' '){

            if (!isalpha(ch))
            {
                std::cout << "## Not a string format ## " << std::endl;
                return false;
            }
            if(ch<'a' || ch >'z')
            {
                std::cout << "## Not a Lowercase String ## " << std::endl;
                std::cout << ch;
                return false;
            }

        }

    }
    return true;
}

void getData(std::string &s, std::string &t, int &k)
{


    int aux1;

    std::cout << "################################################" << std::endl;
    std::cout << "Instructions!!! Read with attention!!!" << std::endl;
    std::cout << "Constrains" << std::endl;
    std::cout << "a) 1 <= | s | <= 100" << std::endl;
    std::cout << "b) 1 <= | t | <= 100" << std::endl;
    std::cout << "c) 1 <= k <= 100" << std::endl;
    std::cout << "d) s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]" << std::endl;


    aux1 = 0;
    do {

        if(aux1 > 0)
        {
            std::cout << "Remember: 1 <= | s | <= 100 and Portuguese alphabet, ascii [a-z]" << std::endl;
        }
        std::cout << "Please, enter with the initial string: ";
        std::getline (std::cin,s);

        aux1 = aux1 +1;
        checkLower(s);

    }while((s.length()>100 || s.length()<1) || (checkLower(s)== false));

    aux1 = 0;

    do {

        if(aux1 > 0)
        {
            std::cout << "Remember: 1 <= | t | <= 100 and Portuguese alphabet, ascii [a-z]" << std::endl;
        }
        std::cout << "Please, enter with the reference string: ";
        std::getline (std::cin,t);

        aux1 = aux1 +1;

    }while((t.length()>100 || t.length()<1) || (checkLower(t)== false));


    do
    {
        std::cout << "Please, enter with the number of operations:" ;
        std::cin >> k;

        if(k > 100 || k <1){std::cout << "The number of operations must be 1 <= k <= 100" << std::endl;}

    } while (k > 100 || k <1);
}

bool ConcatRemove(std::string &s, std::string &t, int &k)
{
    int length_s = s.length();
    int length_t = t.length();
    int eq_pos = 0; // variable used to count the number of characters equal in each string
    int tot_removal =0; // variable that stores the minimal number of removed chars
    int tot_concat = 0; // variable that stores the total number of concatenations needed
    int min_string = std::min(length_s,length_t);

    int j =0;

    for(int ind=0; ind < length_s;ind++)
    {
        if(s[ind]==t[j] && j< min_string)
        {
            eq_pos = eq_pos +1;

            j = j+1;
        }
    }

    tot_removal = min_string - eq_pos; // minimal number of removed chars
    tot_concat = min_string - eq_pos; // consequently the number of chars to be concatenated is the same as the minimal removed

    if(tot_removal + tot_concat > k)
    {
        return false;
    }


    return true;
}
