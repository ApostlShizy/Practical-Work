#include<iostream>
#include<vector>

int main ()
{
    std::vector<int> db(20);    
    int input = 0;   
    int iter = 0;
    std::cout<<"(-1) = Output \n(-3) = Exit"; 

    while(input != -3)
    {                
        std::cout<<"\nInput number: ";
        std::cin>>input;
        if(input == -1)
        {
            std::cout<<"\nOutput: ";    
            for(int i = 0; i < db.size() ;++i)
            {
                if(db[i] == 0) /* так как в масcиве нули это условно говоря пустые индексы встретив первый пустой индекс дальше мы не проверяем, дальше только путые индексы*/
                {
                    break;                    
                }
                std::cout<<db[i]<<" ";
            }
        }
        else if (input > 0)
        {                    
            if(iter == db.size()) /*Начинаем смещение символов когда iter достигает размера массива*/
            {                                          
                for(int i = 1;i < db.size();i++)
                {
                    db[i-1] = db[i];            
                }
                db.back() = input;                             
            }
            else
            {
                db[iter] = input;
                ++iter;
            }       
        }      
    }
}