#include<iostream>
#include<vector>

int main()
{
    int n = 0;
    int num = 0;
    std::vector<int>vecNum;
    std::cout << "\nHow many numbers be in vector: ";
    std::cin >> n;
    vecNum.resize(n);

    for (int i = 0; i < n; i++)
    {
        std::cout << "\nEnter number " << i + 1 << " : ";
        std::cin >> num;
        vecNum[i] = num;
    }

    int x = 0;
    std::cout << "\nEnter number to delite: ";
    std::cin >> x;

    for (int i = 0; i < vecNum.size(); ++i)
    {
        int step = 1;
        while (i + step < vecNum.size() && vecNum[i] == x)
        {            
            vecNum[i] = vecNum[i + step];
            vecNum[i + step] = x;
            ++step;            
        }
        if(i + step == vecNum.size())
        { /*дабы избежать лишние проверки если step + i равно концу векторая значит мы так и не нашли число на замену, значит до конца вектора их нет и можно прервать цикл*/
            break;
        }      
    }

    while (vecNum.size() != 0 && vecNum.back() == x)
    {
        vecNum.pop_back();
    }

    for (int i = 0; i < vecNum.size(); ++i)
    {
        std::cout << " " << vecNum[i];
    }
} 


