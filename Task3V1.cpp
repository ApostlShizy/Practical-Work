#include<iostream>
#include<vector>

int main ()
{
    std::vector<int> db(20);    
    int input = 0;   
    int iter = 0;
    int totalAdd = 0;
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
                if  (totalAdd > 20 && i + totalAdd % 20 < db.size())
                {
                    std::cout<< db[i+totalAdd % 20]<<" ";                      
                }
                else if (totalAdd > 20)
                {
                    std::cout<<db[((totalAdd % 20) - db.size()) + i]<<" ";                    
                }
                else if (db[i] != 0)
                {
                    std::cout<<db[i]<<" ";                    
                }
            }
        }
        else if (input > 0)
        {            
            db[iter] = input;
            ++iter;
            ++totalAdd;
            if(iter == db.size())
            {
                iter = 0;
            }                  
        }      
    }
}