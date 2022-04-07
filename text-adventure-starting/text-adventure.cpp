#include <iostream>

int main (){


    // Welcome to your first car
    int carChoice; // Ford, Honda, Toyota
    int carModelChoice; // different models for each car
    int usedOrNew;


    std::cout << "Welcome to your first car purchase \n\n";
    std::cout << "At some point of your life you will run into a dilemma of first car purchase. It doesn't matter \n" <<
    " if your a car person or not. \n";

    std::cout << "Lets first start by figuring out which manufacturer you want to go with \n \n";
    std::cout << "The choices we have are, 1) Ford , 2) Honda, 3) Toyota \n";
    std::cin >> carChoice;

    while (carChoice != 1 && carChoice != 2 && carChoice != 3){
        std::cout << "Wrong choice was entered, try again! \n";
        std::cout << "The choices we have are, 1) Ford , 2) Honda, 3) Toyota \n";
        std::cin >> carChoice;
        


    }

    if (carChoice == 1 || carChoice == 2 || carChoice == 3 ){

        switch (carChoice){
            // Ford
            case 1:
                std::cout << "You picked Ford! \n";
                std::cout << "Now lets pick your model \n" << "Your choices are 1) Focus ST or 2) Fiesta ST\n";
                std::cin >> carModelChoice;

                while (carModelChoice != 1 && carModelChoice != 2){ // Test to ensure we got the right input
                    std::cout << "Wrong choice was entered, try again! \n";
                    std::cout << "Now lets pick your model \n" << "Your choices are 1) Focus ST or 2) Fiesta ST\n";
                    std::cin >> carModelChoice;
                }

                if(carModelChoice == 1 || carModelChoice == 2){
                    switch (carModelChoice)
                    {

                    // Focus ST
                    case 1:
                        std::cout << "Great choice, you picked Ford Focus ST, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $15,000 and new cost $25,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $15,000 and new cost $25,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Ford Focus ST!\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Ford Focus ST!\n\n";
                                std::cout << "Must be nice being able to afford a new car at young age!\n\n";
                            default:
                                break;
                            }
                        }
                        
                        break;

                    // Fiesta ST
                    case 2:

                        std::cout << "Great choice, you picked Ford Fiesta ST, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $11,000 and new cost $21,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $11,000 and new cost $21,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Ford Fiesta ST!\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Ford Fiesta ST!\n\n";
                                std::cout << "Must be nice being able to afford a new car at young age!\n\n";
                            default:
                                break;
                            }
                        }
                        
                        break;

                    
                    default:
                        break;
                    }
                }
                
                
                
                break;

            // Honda
            case 2:
                std::cout << "You picked Honda! \n";
                std::cout << "Now lets pick your model \n" << "Your choices are 1) Civic Si or 2) Accord Sport\n";
                std::cin >> carModelChoice;

                while (carModelChoice != 1 && carModelChoice != 2){ // Test to ensure we got the right input
                    std::cout << "Wrong choice was entered, try again! \n";
                    std::cout << "Now lets pick your model \n" << "Your choices are 1) Civic Si or 2) Accord Sport\n";
                    std::cin >> carModelChoice;
                }

                if(carModelChoice == 1 || carModelChoice == 2){
                    switch (carModelChoice)
                    {

                    // Civic Si
                    case 1:
                        std::cout << "Great choice, you picked Honda Civic Si, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $12,000 and new cost $23,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $12,000 and new cost $23,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Honda Civic Si!\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Honda Civic Si!\n\n";
                                std::cout << "Must be nice being able to afford a new car at young age!\n\n";
                            default:
                                break;
                            }
                        }
                        
                        break;

                    // Accord Sport
                    case 2: 
                        std::cout << "Great choice, you picked Accord Sport, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $17,000 and new cost $29,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $17,000 and new cost $29,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Honda Accord Sport!\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Honda Accord Sport!\n\n";
                                std::cout << "Must be nice being able to afford a new car at young age!\n\n";
                            default:
                                break;
                            }
                        }
                        
                        break;
                    
                    default:
                        break;
                    }
                }

                break;

            // Toyota
            case 3:
                std::cout << "You picked Toyota! \n";
                std::cout << "Now lets pick your model \n" << "Your choices are 1) Corolla XSE or 2) Camry XSE\n";
                std::cin >> carModelChoice;

                while (carModelChoice != 1 && carModelChoice != 2){ // Test to ensure we got the right input
                    std::cout << "Wrong choice was entered, try again! \n";
                    std::cout << "Now lets pick your model \n" << "Your choices are 1) Corolla XSE or 2) Camry XSE\n";
                    std::cin >> carModelChoice;
                }

                if(carModelChoice == 1 || carModelChoice == 2){
                    switch (carModelChoice)
                    {

                    // Corolla XSE
                    case 1:
                        std::cout << "Great choice, you picked Corolla XSE, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $16,000 and new cost $26,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $16,000 and new cost $26,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Toyota Corolla XSE!\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Toyota Corolla XSE!\n\n";
                                std::cout << "Must be nice being able to afford a new car at young age!\n\n";
                            default:
                                break;
                            }
                        }
                        
                        break;

                    // Camry XSE
                    case 2: 
                        std::cout << "Great choice, you picked Toyota Camry XSE, Fun car!\n";
                        std::cout << "Now lets pick if you want a used or new car\n"<< "Used cost $19,000 and new cost $29,000\n";
                        std::cout << "enter 1) for used and 2) for new\n";
                        std::cin >> usedOrNew;

                        while (usedOrNew != 1 && usedOrNew != 2){
                            std::cout << "Wrong choice was entered, try again! \n";
                            std::cout << "Now lets pick if we want use or new\n"<< "Used cost $19,000 and new cost $29,000";
                            std::cout << "enter 1) for used and 2) for new\n";
                            std::cin >> usedOrNew;
                        }
                        if (usedOrNew == 1 || usedOrNew == 2)
                        {
                            switch (usedOrNew)
                            {
                            case 1:
                                std::cout << "Smart Choice! you opted out to save some money by purchasing a used Toyota Camry XSE!\n\n";
                                break;
                            
                            case 2:
                                std::cout << "Great choice, you purchased a brand new, Toyota Camry XSE!\n";
                                std::cout << "Must be nice being able to afford a new car at young age\n\n!";
                            default:
                                break;
                            }
                        }
                        
                        break;
                    
                    default:
                        break;
                    }
                }
                break;

            default: 
                // huh?
                std::cout << "Something went wrong! ";

        }
        std::cout << "Thank you for playing!";



    }
}